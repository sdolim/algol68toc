#!/bin/sh

help() {
  echo "Usage: setup.mm [--mm=dir] --bs=dir --sd=<7 uppercase-letters>"
  echo "where"
  echo "  --mm=directory of mm_default_database.mmd"
  echo "       (default=/usr/share/algol68toc/)"
  echo "  --bs=base directory (no default)"
  echo "  --sd=nameseed start value"
  echo
  echo "Create the rctr amd nameseed files and create modules.mmd"
  echo "suitable for your environment."
  exit 1
}

if [ $# -lt 2 ]
then help
fi

MMDIR=/usr/share/algol68toc
CTDIR=$(dirname $(which a68toc))
BSDIR=

while [ $# -gt 0 ]
do
  case $1 in
    --mm=*) MMDIR=${1#--mm=}
           shift
           ;;
    --bs=*) BSDIR=${1#--bs=}
           shift
           ;;
    --sd=*) SEED=${1#--sd=}
	   shift
	   ;;
    *)     help
  esac
done

if [ ! -x ${CTDIR}/a68toc ]
then echo "${CTDIR}/a68toc does not exist!";  exit 1
elif [ ! -x ${CTDIR}/mm ]
then echo "${CTDIR}/mm does not exist!"; exit 1
elif [ ! -f ${MMDIR}/mm_default_database.mmd ]
then echo  "${MMDIR}/mm_default_database.mmd does not exist!"; exit 1
elif [ ! -x $(which sed) ]
then echo "sed not installed: required for this script!"; exit 1
elif [ ! -d ${BSDIR} ]
then echo "${BSDIR} does not exist!"; exit 1
elif [ -z ${EDITOR} ]
then echo "${EDITOR} not set!"; exit 1
else
  MMDIR=$(cd ${MMDIR}; pwd)
  BSDIR=$(cd ${BSDIR}; pwd)
fi

pushd ${BSDIR}
# Create a dummy standard.a68
touch standard.a68
# Now create the sed script to edit the original modules.mmd
echo 's/\//\\\//g' >/tmp/setup.sed.a
echo ${MMDIR} >/tmp/setup.sed.mm
echo ${CTDIR} >/tmp/setup.sed.cta
sed -e 's/\/bin$//' /tmp/setup.sed.cta >/tmp/setup.sed.ct
echo ${EDITOR} >/tmp/setup.sed.ed
echo ${HOME} >/tmp/setup.sed.hm
sed -f /tmp/setup.sed.a -e 's/^/s\/mmdir\//' -e 's/$/\//' /tmp/setup.sed.mm >/tmp/setup.sed
sed -f /tmp/setup.sed.a -e 's/^/s\/editor\//' -e 's/$/\//' /tmp/setup.sed.ed>>/tmp/setup.sed
sed -f /tmp/setup.sed.a -e 's/^/s\/algol68tocdir\//' -e 's/$/\//' /tmp/setup.sed.ct >>/tmp/setup.sed
sed -f /tmp/setup.sed.a -e 's/^/s\/homedir\//' -e 's/$/\//' /tmp/setup.sed.hm >>/tmp/setup.sed
sed -f /tmp/setup.sed ${MMDIR}/modules.mmd >modules.mmd
rm -f /tmp/setup.sed*
# Now create the nameseed file
reset.nameseed ${SEED}

# Finished--let the user know
echo
echo "Directories for Algol 68 source, generated C source,"
echo "m files and binaries (including libraries) have been created."
echo
echo "The file 'modules.mmd' has been initialised to your setup"
echo "and rctr and nameseed created."
echo
popd
#end of setup.mm
