#include <gb/gb.h>
#include <stdio.h>
#include <string.h>

int screenTileHeight = 18;
int screenTileWidth = 20;
char * mssg = "Hello World";


void printMiddleScreen(){
	int i;
	for(i=0; i<(screenTileHeight/2); i++){
		printf(" \n");
	}
	for(i=0; i<((strlen(mssg)-1)/2); i++){
		printf(" ");
	}
	printf("%s", mssg);
}

void main(){
	printMiddleScreen();
}