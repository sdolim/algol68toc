#!/usr/bin/make
#
# $Id: Makefile,v 1.1 2004/09/04 02:23:11 teshields Exp $
#
#------------ Algol 68 sources -------------
a68config_a:=a68config.a68

#------------ Derived file sets -------------
a68config_c:=a68config.c
a68config_o:=a68config.o

include $(TOP)/Algol68.mk

#-------------- Rules --------------
.PHONY : install

all : $(a68config_o)

Translate : $(a68config_c)

install :
	$(INSTALLDATA) -p a68config.m $(PKGDIR)
