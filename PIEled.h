/*
   PIE LED BLINKER
   NetPIE Project
   http://netpie.io
*/

#ifndef PIELED_H
#define PIELED_H

#include "Arduino.h"

class PIEled
{
	public:
	
		PIEled();
		
		void setState(int _ledsetstate);
		void setPin(int _ledsetpin);
		void setSpeed1(int _time1);
		void setSpeed2(int _time2);
		void setSpeed3(int _time3);
		void loop();
};

#endif
