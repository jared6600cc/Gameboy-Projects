:::: Clean-up last compilation ::::
DEL basicDisplayAndOutput.sav
DEL basicDisplayAndOutput.gb
DEL *.gb

:::: Compilation ::::
%~dp0..\..\bin\lcc -c -o basicDisplayAndOutput.o basicDisplayAndOutput.c
%~dp0..\..\bin\lcc -o basicDisplayAndOutput.gb basicDisplayAndOutput.o

:::: Clean-up intermediate files ::::
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
