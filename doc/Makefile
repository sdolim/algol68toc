#!/usr/bin/make
#
# $Id: Makefile,v 1.7 2004/09/05 07:59:10 teshields Exp $
#
#-------------- Documentation sources ---------------
ctrans_doc := HOWTO-pame.txt compl.taylour star.txt

pame_tex := pame.tex title.tex preface.tex \
        chapter1.tex chapter2.tex chapter3.tex chapter4.tex \
        chapter5.tex chapter6.tex chapter7.tex chapter8.tex \
        chapter9.tex chapter10.tex chapter11.tex chapter12.tex \
        chapter13.tex bibliography.tex index.see pame.sed pame.sty \
        ch11-1.epic ch11-2.epic ch11-3.epic ch11-4.epic \
        ch11-5.epic ch11-6.epic ch11-7.epic ch11-8.epic \
        ch11-9.epic ch11-10.epic

#--------------- Rules ---------------
.PHONY: install

all : pame.dvi rscompiler.dvi ctrans.info.gz a68toc.1.gz \
	ca68.1.gz $(ctrans_doc)

pame.dvi : $(pame_tex)
	chmod +x pame.sh
	latex pame >latex.log
	latex pame >>latex.log
	makeindex -o pame.index -s pame.ist pame.idx
	./pame.sh
	latex pame >>latex.log
	latex pame >>latex.log

rscompiler.dvi : rscompiler.texi
	tex rscompiler.texi

ctrans.info.gz : ctrans.texi
	tex $<
	texindex ctrans.??
	makeinfo $<
	gzip -9 ctrans.info*

a68toc.1.gz : a68toc.1
	gzip -9c $< >$@

ca68.1.gz : ca68.1
	gzip -9c $< >$@

install :
	$(INSTALLDATA) -p rscompiler.dvi pame.dvi HOWTO-pame.txt \
	   compl.taylour star.txt $(DOCDIR)
	$(INSTALLDATA) -p ctrans.info*.gz \
	   $(INFODIR)
	$(INSTALLDATA) -p a68toc.1.gz ca68.1.gz $(MANDIR)
