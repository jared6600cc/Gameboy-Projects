:::: Clean-up last compilation ::::
DEL joypad.sav
DEL joypad.gb
DEL *.gb

:::: Compilation ::::
%~dp0..\..\bin\lcc -c -o joypad.o joypad.c
%~dp0..\..\bin\lcc -o joypad.gb joypad.o

:::: Clean-up intermediate files ::::
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
