#!/bin/bash

cat pame.sed >pame.sed2
grep "Warning" pame.ilg|cut -d= -f5|cut -d')' -f1|sed -e 's/$/d/' >>pame.sed2
sed -f pame.sed2 pame.index >pame.ind
rm -f pame.sed2
