:::: Clean-up last compilation ::::
DEL beeper.sav
DEL beeper.gb
DEL *.gb

:::: Compilation ::::
%~dp0..\..\bin\lcc -c -o beeper.o beeper.c
%~dp0..\..\bin\lcc -o beeper.gb beeper.o

:::: Clean-up intermediate files ::::
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
