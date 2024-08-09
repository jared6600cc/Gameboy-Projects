//Using tutorial: https://gbdev.gg8.se/wiki/articles/GBDK_Sprite_Tutorial

#include <gb/gb.h>
#include "smile.c"

int delayMS = 500;

void main(){
	// Draw sprite
	SPRITES_8x16;
	set_sprite_data(0, 8, smile);
	set_sprite_tile(0, 0);		// 1st half
	move_sprite(0, 75, 75);		// 1st half
	set_sprite_tile(1, 2);		// 2nd half
	move_sprite(1, 75+8, 75);	// 2nd half
	SHOW_SPRITES;
	
	while(1){
		// Animate sprite
		set_sprite_tile(1, 6);
		delay(delayMS);
		set_sprite_tile(1, 2);
		delay(delayMS);
	}
}