#!/usr/bin/make
#
# $Id: Makefile,v 1.2 2004/09/04 02:45:13 teshields Exp $
#
#------------ Algol 68 sources -------------
examples_a := client1.a68 client2.a68 server1.a68 server2.a68 \
        testexit.a68 testov.a68 \
        tt1.a68 tt1data.a68 tt2.a68 tt2.data tt3.a68

all : $(examples_a)

install :
	$(INSTALLDATA) -p $(examples_a) $(DOCDIR)/examples
