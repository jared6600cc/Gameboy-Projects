#include <gb/gb.h>

int delayMS = 50;
int beepDuration = 100;

void init_sound(){
	NR52_REG = 0x80; //turn on sound
	NR50_REG = 0x77;	// set volume
	NR51_REG = 0xFF;	// enable all sound channels
}

void play_beep(UINT8 jpr){
	NR10_REG = 0x00;	// sweep settings
	NR11_REG = 0x80;	// wave duty cycle
	NR12_REG = 0xF3;	// volume envelope
	if(jpr & J_UP){				//highbeep
		NR13_REG = 255 & 0xFF;			// set lower 8bits of the freq.
		NR14_REG = (255 >> 8)|0x80;		// set upper 3bits & trigger the sound
	} else if(jpr & J_DOWN){	//lowbeep
		NR13_REG = 0 & 0xFF;			// set lower 8bits of the freq.
		NR14_REG = (0 >> 8)|0x80;		// set upper 3bits & trigger the sound
	} else {					//medbeep
		NR13_REG = 100 & 0xFF;			// set lower 8bits of the freq.
		NR14_REG = (150 >> 8)|0x80;		// set upper 3bits & trigger the sound
	}
}

void main(){
	UINT8 joypadResult;
	init_sound();
	
	while(1){
		joypadResult = joypad();
		
		// Move sprite if input detected
		if(joypadResult & J_UP){
			play_beep(joypadResult);
		}
		if(joypadResult & J_DOWN){
			play_beep(joypadResult);
		}
		if(joypadResult & J_RIGHT){
			play_beep(joypadResult);
		}
		if(joypadResult & J_LEFT){
			play_beep(joypadResult);
		}
		delay(delayMS);
	}
}