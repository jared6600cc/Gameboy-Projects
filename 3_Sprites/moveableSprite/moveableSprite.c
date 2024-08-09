//Using tutorial: https://gbdev.gg8.se/wiki/articles/GBDK_Sprite_Tutorial

#include <gb/gb.h>
#include "smile.c"

int delayMS = 10;

void main(){
	UINT8 joypadResult;
	UINT8 leftXPos = 75;
	UINT8 leftYPos = 75;
	UINT8 rightXPos = leftXPos+8;
	UINT8 rightYPos = leftYPos;
	
	// Draw sprite
	SPRITES_8x16;
	set_sprite_data(0, 8, smile);
	set_sprite_tile(0, 0);					// 1st half
	move_sprite(0, leftXPos, leftYPos);		// 1st half
	set_sprite_tile(1, 2);					// 2nd half
	move_sprite(1, rightXPos, rightYPos);	// 2nd half
	SHOW_SPRITES;
	
	while(1){
		joypadResult = joypad();
		
		// Move sprite if input detected
		if(joypadResult & J_UP){
			leftYPos--;
			rightYPos--;
			move_sprite(0, leftXPos, leftYPos);
			move_sprite(1, rightXPos, rightYPos);
		}
		if(joypadResult & J_DOWN){
			leftYPos++;
			rightYPos++;
			move_sprite(0, leftXPos, leftYPos);
			move_sprite(1, rightXPos, rightYPos);
		}
		if(joypadResult & J_RIGHT){
			leftXPos++;
			rightXPos++;
			move_sprite(0, leftXPos, leftYPos);
			move_sprite(1, rightXPos, rightYPos);
		}
		if(joypadResult & J_LEFT){
			leftXPos--;
			rightXPos--;
			move_sprite(0, leftXPos, leftYPos);
			move_sprite(1, rightXPos, rightYPos);
		}
		delay(delayMS);
	}
}