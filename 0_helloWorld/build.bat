:::: Clean-up last compilation ::::
DEL helloWorld.sav
DEL helloWorld.gb
DEL *.gb

:::: Compilation ::::
%~dp0..\..\bin\lcc -c -o helloWorld.o helloWorld.c
%~dp0..\..\bin\lcc -o helloWorld.gb helloWorld.o

:::: Clean-up intermediate files ::::
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
