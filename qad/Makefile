#!/usr/bin/make
#
# $Id: Makefile,v 1.1 2004/09/04 03:12:10 teshields Exp $
#-------------- Algol 68 sources ---------------
qad_a := spmodes.a68 spaliens.a68 spops.a68 spplain.a68 \
        spconvert.a68 transput.a68 standard.a68

#-------------- Derived file sets --------------
# QAD standard prelude
qad_c := $(patsubst %.a68,%.c,$(qad_a))
qad_o := $(patsubst %.a68,%.o,$(qad_a))

include $(TOP)/Algol68.mk

.PHONY: clean install

all : liba68s.a

liba68s.a : $(ACD)/a68config.o $(qad_o)
	ar rv $@ $^
	ranlib $@

Translate : remove nameseed $(qad_c)

clean :
	rm -f nameseed $(qad_o)

nameseed : rctr
	cp rctr nameseed

remove : clean
	rm -f $(qad_c)

install :
	$(INSTALLDATA) -p liba68s.a $(LIBDIR)
	$(INSTALLDATA) -p standard.m $(PKGDIR)
