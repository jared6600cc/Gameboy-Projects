#include <gb/gb.h>
#include <stdio.h>

int counterInt = 0;

void printCount(){
	printf(" \n%u", (INT16)counterInt);
	waitpadup();	// wait for all buttons to be released
}

void main(){
	// Print initial value of counter
	printCount();
	
	// Update counter & print on joypad input
	while(1){
		if(joypad() & J_UP){
			counterInt++;
			printCount();
		}
		if(joypad() & J_DOWN){
			counterInt--;
			printCount();
		}
	}
}