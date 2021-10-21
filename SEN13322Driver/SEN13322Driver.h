/* --------------------------------------------------------------------------------------------------- *
* Khanh Truong - khanhptruong@csu.fullerton.edu
* California State University Fullerton
* Created: FEB 22 2017
*
* Description: Device driver for Soil moisture sensor
*
* Copyright 2017
* --------------------------------------------------------------------------------------------------- */

#ifndef SEN13322Driver_h
#define SEN13322Driver_h

#include "Arduino.h"

class SEN13322Driver{
public:
	SEN13322Driver();
	void init(int PIN_SOIL, int PIN_POWER);
	int moisture();
private:
	int _PIN_SOIL;
	int _PIN_POWER;
};

#endif