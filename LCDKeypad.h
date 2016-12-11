// LCDKeypad.h

#ifndef _LCDKEYPAD_h
#define _LCDKEYPAD_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class LCDKeypadClass
{
 protected:


 public:
	void init();
	int keypad();
};

extern LCDKeypadClass LCDKeypad;

#endif

