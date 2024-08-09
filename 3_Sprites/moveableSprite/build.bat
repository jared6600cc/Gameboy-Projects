:::: Clean-up last compilation ::::
DEL moveableSprite.sav
DEL moveableSprite.gb
DEL *.gb

:::: Compilation ::::
%~dp0..\..\bin\lcc -c -o moveableSprite.o moveableSprite.c
%~dp0..\..\bin\lcc -o moveableSprite.gb moveableSprite.o smile.c

:::: Clean-up intermediate files ::::
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
