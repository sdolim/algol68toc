#!/usr/bin/make

# $Id: Makefile,v 1.12 2004/09/26 17:09:23 teshields Exp $
#------------ Debug value -------------
DEBUG=no
#------------ Debian values -----------
DESTDIR=
VERSION=1.6
NODEPENDS=
PKGDIR=$(DESTDIR)/usr/share/algol68toc
DOCDIR=$(DESTDIR)/usr/share/doc/algol68toc
BINDIR=$(DESTDIR)/usr/bin
LIBDIR=$(DESTDIR)/usr/lib
INFODIR=$(DESTDIR)/usr/share/info
MANDIR=$(DESTDIR)/usr/share/man/man1
INCDIR=$(DESTDIR)/usr/include/algol68

#------------- Absolute directories ------------
TOP:=$(shell pwd)
VPATH:=$(TOP)/include
INCS:=-I $(VPATH)

#------------- sub-directories --------------
ACD=$(TOP)/a68config
CTD=$(TOP)/src
DAD=$(TOP)/data
DOD=$(TOP)/doc
EXD=$(TOP)/examples
LBD=$(TOP)/library
LPD=$(TOP)/liba68prel
QAD=$(TOP)/qad

ADIRS=a68config liba68prel src qad
CDIRS=library a68config liba68prel src
DDIRS=doc data examples scripts

#------------- a68toc environment --------------
A68_GC_POLICY:=1
A68_GC_DEBUG:=0
A68_NAMESEED=nameseed
A68_LIB:=$(ACD)

#------------ Flags ------------
ifeq ($(DEBUG),no)
override CFLAGS=-O0
else
override CFLAGS=-O0 -g
endif
NOR=$(CFLAGS) $(INCS)
CTSTAR=59LR
QADSTAR=1234ABCD
CTFLAGS=-v -uname seedfile -staredit $(CTSTAR)
QADFLAGS=-v -s -uname seedfile -staredit $(QADSTAR)

#------------ Programs -----------
CC=gcc
ALGOL=$(CTD)/a68toc
SHELL=/bin/sh
INSTALL=$(shell which install) -g root -o root
INSTALLDATA=$(INSTALL) -m 644
INSTALLPROG=$(INSTALL) -m 555

# Export all macros
export

#-------------- Rules --------------
.PHONY : clean info uninstall

all : c-stamp q-stamp d-stamp

Translate : remove nameseed
	for d in $(ADIRS); do make -C $$d Translate; done

c-stamp:
	-for d in $(CDIRS); do make -C $$d; done
	touch c-stamp

q-stamp : nameseed
	-make -C $(QAD)
	touch q-stamp

d-stamp :
	-make -C $(DOD)
	touch d-stamp

install : c-stamp q-stamp d-stamp
	$(INSTALL) -m 755 -d $(PKGDIR)
	$(INSTALL) -m 755 -d $(INCDIR)
	$(INSTALL) -m 755 -d $(INCDIR)/linux
	$(INSTALL) -m 755 -d $(BINDIR)
	$(INSTALL) -m 755 -d $(LIBDIR)
	$(INSTALL) -m 755 -d $(INFODIR)
	$(INSTALL) -m 755 -d $(DOCDIR)
	$(INSTALL) -m 755 -d $(DOCDIR)/examples
	$(INSTALL) -m 755 -d $(MANDIR)
	for d in include library $(ADIRS) $(DDIRS); do $(MAKE) -C $$d install; done

info :
	install-info --quiet $(INFODIR)/ctrans.info.gz

uninstall :
	-$(RM) $(BINDIR)/a68toc $(BINDIR)/reset.ctrans $(BINDIR)/ca68
	-install-info --quiet --remove $(INFODIR)/ctrans.info.gz
	-$(RM) -rf $(PKGDIR) $(DOCDIR)
	-$(RM) $(INFODIR)/ctrans.info*.gz \
           $(LIBDIR)/liba68.a $(LIBDIR)/liba68s.a $(AMNDIR)/a68toc.1.gz

dist-clean: clean
	-$(RM) c-stamp q-stamp d-stamp
	-$(RM) -rf DEBIAN -rf debian/tmp
	-$(RM) $(CTD)/a68toc $(LBD)/liba68.a $(LBD)/Afirst*.o

nameseed : a68config/rctr liba68prel/rctr src/rctr qad/rctr
	for d in $(ADIRS); do cp $$d/rctr $$d/nameseed; done

remove :
	for d in $(ADIRS); do rm -f $$d/*.c $$d/*.m; done

clean:
	find $(TOP) \( -name '*~' -o -name '*.asv' -o -name '*##' \
             -o -name '*.gz' -o -name '*.a' \) -print -exec $(RM) '{}' ';'
	-$(RM) *-stamp $(LBD)/*.o src/a68toc \
          doc/ctrans.{aux,cp,cps,dvi,fn,fns,ky,kys,log,pg,pgs,toc,tp,tps,vr,vrs} \
          doc/rscompiler.{aux,cp,dvi,fn,ky,log,pg,toc,tp,vr} \
          doc/pame.{ans,aux,dvi,idx,ilg,ind,index,log,toc} doc/latex.log
	-for i in $(ADIRS); do $(RM) $$i/*.o $$i/nameseed; done
	-$(RM) qad/*.[cm]

# $Log: Makefile,v $
# Revision 1.12  2004/09/26 17:09:23  teshields
# Corrected typo: CFALGS -> CFLAGS
#
# Revision 1.11  2004/09/05 14:34:57  teshields
# Corrected make rules related to maintenance of 'ctrans.info'
#
# Revision 1.10  2004/09/03 11:34:55  teshields
# Algol68toC v1.8 Public Baseline
#
# Revision 1.10  2003/05/31 13:02:41  sian
# Removal of compiled libraries and binaries
#
# Revision 1.9  2003/04/23 08:57:20  sian
# Debian release 1.5
#
# Revision 1.8  2002/06/20 13:16:57  sian
# Minor alterations to make files
#
# Revision 1.7  2002/06/20 11:49:27  sian
# mm removed, padding removed, ca68 added
#
# Revision 1.6  2002/06/06 12:46:19  sian
# Minor alterations
#
# Revision 1.5  2002/02/23 17:50:42  sian
# Release 1.1
#
# Revision 1.4  2002/02/19 11:40:11  sian
# *** empty log message ***
#
# Revision 1.2  2001/05/11 18:55:32  sian
# Changed INFODIR to /usr/share/info
#
# Revision 1.1.1.1  2001/05/07 10:16:10  sian
# Import of Ctrans v1.0.4
#
# Revision 1.9  2000/07/06 14:46:57  sian
# Added uninstall
#
# Revision 1.8  2000/07/06 13:08:21  sian
# Should be ready for release
#
# Revision 1.7  2000/07/05 19:20:35  sian
# Minor corrections to Makefiles
#
# Revision 1.6  2000/07/05 15:52:57  sian
# Altered the installation tarball to ctrans-bin_$(VERSION).tar.gz
#
# Revision 1.5  2000/07/05 14:37:53  sian
# Ready for release 0.1.0
#
# Revision 1.3  2000/01/19 17:51:20  sian
# New versions for Phoenix Engineering release of Ctrans
#
# End of Makefile
