#include "Arduino.h"
#include "SEN13322Driver.h"

SEN13322Driver::SEN13322Driver(){
	//do nothing
}

void SEN13322Driver::init(int PIN_SOIL, int PIN_POWER){
	_PIN_SOIL = PIN_SOIL;
	_PIN_POWER = PIN_POWER;
	
	pinMode(_PIN_POWER, OUTPUT);
	digitalWrite(_PIN_POWER, LOW);
}

int SEN13322Driver::moisture(){
	digitalWrite(_PIN_POWER, HIGH);
    delay(10);//wait 10 milliseconds 
    int moisture = analogRead(_PIN_SOIL); 
    digitalWrite(_PIN_POWER, LOW);//turn D7 "Off"
    return moisture;//send current moisture value
}