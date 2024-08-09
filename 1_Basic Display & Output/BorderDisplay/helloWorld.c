#include <gb/gb.h>
#include <stdio.h>
#include <string.h>

int screenTileHeight = 18;
int screenTileWidth = 20;
char * mssg = "   Hello World";

void printBorder(){
	int i, j;
	// Print top border
	for(i=0; i<screenTileWidth; i++){
		printf("*");
	}
	// Print side borders & body
	for(i=1; i<screenTileHeight-1; i++){
		printf("*");	// Print left border
		if(i == (screenTileHeight/2)-1){
			// Halfway through
			printf("%s", mssg);
			for(j=0; j<(screenTileWidth-strlen(mssg)-2) ; j++){
				printf(" ");
			}
		} else {
			// Everywhere else
			for(j=0; j<screenTileWidth-2; j++){
				printf(" ");
			}
		}
		printf("*");	// Print right border
	}
	// Print bottom border
	for(i=0; i<screenTileWidth-1; i++){
		printf("*");
	}
}

void main(){
	printBorder();
}