:::: Clean-up last compilation ::::
DEL animatedSprite.sav
DEL animatedSprite.gb
DEL *.gb

:::: Compilation ::::
%~dp0..\..\bin\lcc -c -o animatedSprite.o animatedSprite.c
%~dp0..\..\bin\lcc -o animatedSprite.gb animatedSprite.o smile.c

:::: Clean-up intermediate files ::::
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
