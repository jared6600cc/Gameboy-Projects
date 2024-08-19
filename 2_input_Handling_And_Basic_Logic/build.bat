:::: Clean-up last compilation ::::
DEL inputHandlingAndBasicLogic.sav
DEL inputHandlingAndBasicLogic.gb
DEL *.gb

:::: Compilation ::::
%~dp0..\..\bin\lcc -c -o inputHandlingAndBasicLogic.o inputHandlingAndBasicLogic.c
%~dp0..\..\bin\lcc -o inputHandlingAndBasicLogic.gb inputHandlingAndBasicLogic.o

:::: Clean-up intermediate files ::::
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
