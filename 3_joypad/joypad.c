#include <gb/gb.h>
#include <stdio.h>

void main(){
	// Take button input & print to screen
	while(1){
		switch(joypad()){
			case J_UP :				// D-Pad UP
				printf("Up\n");
				waitpadup();
				break;
			case J_RIGHT :			// D-Pad RIGHT
				printf("Right\n");
				waitpadup();
				break;
			case J_DOWN :			// D-Pad DOWN
				printf("Down\n");
				waitpadup();
				break;
			case J_LEFT :			// D-Pad LEFT
				printf("Left\n");
				waitpadup();
				break;
			case J_A :				// A Button
				printf("A\n");
				waitpadup();
				break;
			case J_B :				// B Button
				printf("B\n");
				waitpadup();
				break;
			case J_START :			// Start Button
				printf("Start\n");
				waitpadup();
				break;
			case J_SELECT :			// Select Button
				printf("Select\n");
				waitpadup();
				break;
			default :
				break;
		}
	}
}