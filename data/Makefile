#!/usr/bin/make
#
# $Id: Makefile,v 1.1 2004/09/04 02:27:36 teshields Exp $
#
#------------ Algol 68 sources -------------
data_f := algol68.ssh lf.a68 m_algol.fte main.fte sheets.map \
          test.lf ui_k_fte.fte ui_m_kb.fte

algol_make := Algol68.mk

#------------ Rules ---------------
.PHONY : install

all : $(data_f) $(algol_make)

install :
	$(INSTALLDATA) -p $(data_f) $(DOCDIR)
	$(INSTALLDATA) -p $(algol_make) $(PKGDIR)
