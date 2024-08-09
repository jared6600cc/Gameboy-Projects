#include <gb/gb.h>

int delayMS = 10;
int beepDuration = 10;

void init_sound(){
	NR52_REG = 0x80; //turn on sound
	NR50_REG = 0x77;	// set volume
	NR51_REG = 0xFF;	// enable all sound channels
}

void play_beep(){
	NR10_REG = 0x16;	// sweep settings
	NR11_REG = 0x80;	// wave duty cycle
	NR12_REG = 0xF3;	// volume envelope
	NR13_REG = 0x00;	// frequency low
	NR14_REG = 0x87;	// frequency high & start sound
}

void main(){
	UINT8 joypadResult;
	init_sound();
	
	while(1){
		joypadResult = joypad();
		
		// Move sprite if input detected
		if(joypadResult & J_UP){
			play_beep();
		}
		if(joypadResult & J_DOWN){
			play_beep();
		}
		if(joypadResult & J_RIGHT){
			play_beep();
		}
		if(joypadResult & J_LEFT){
			play_beep();
		}
		delay(delayMS);
	}
}