:::: Clean-up last compilation ::::
DEL counter.sav
DEL counter.gb
DEL *.gb

:::: Compilation ::::
%~dp0..\..\bin\lcc -c -o counter.o counter.c
%~dp0..\..\bin\lcc -o counter.gb counter.o

:::: Clean-up intermediate files ::::
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
