#include <gb/gb.h>
#include <stdio.h>
#include <string.h>

void main(){
	// Init device
	DISPLAY_OFF;	// off for setup
	set_mode(0);	// 0= textmode
	
	// Print to screen	
	printf("\nHello World\n");
	
	// Turn on display
	DISPLAY_ON;
	
	// Main game loop
	while(1){
		wait_vbl_done();		// avoid screen tear
	}
}