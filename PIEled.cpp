#include "PIEled.h"
#include "Arduino.h"

int _led_pinout = 13;
int _led_state = 0;

int _led_speed_1 = 500;
int _led_speed_2 = 250;
int _led_speed_3 = 100;
unsigned long _last_led_millis;
		
PIEled::PIEled()
{
}

void PIEled::setPin(int _ledsetpin)
{
	_led_pinout = _ledsetpin;
	pinMode(_led_pinout,OUTPUT);
}

void PIEled::setState(int _ledsetstate)
{
	_led_state = _ledsetstate;
}

void PIEled::setSpeed1(int _time1)
{
	_led_speed_1 = _time1;
}

void PIEled::setSpeed2(int _time2)
{
	_led_speed_2 = _time2;
}

void PIEled::setSpeed3(int _time3)
{
	_led_speed_3 = _time3;
}

void PIEled::loop()
{
  if(_led_state == 0)
  {
    digitalWrite(_led_pinout, LOW);
    _last_led_millis = millis();
  }

  if(_led_state == 1)
  {
    digitalWrite(_led_pinout, HIGH);
    _last_led_millis = millis();
  }
  
  if(_led_state == 2)
  {
    if(millis() - _last_led_millis > _led_speed_1)
    {
      if(digitalRead(_led_pinout))
      {
        digitalWrite(_led_pinout,LOW);
        _last_led_millis = millis();
      }
      else
      {
        digitalWrite(_led_pinout,HIGH);
        _last_led_millis = millis();
      }
    }
  }
  
  if(_led_state == 3)
  {
    if(millis() - _last_led_millis > _led_speed_2)
    {
      if(digitalRead(_led_pinout))
      {
        digitalWrite(_led_pinout,LOW);
        _last_led_millis = millis();
      }
      else
      {
        digitalWrite(_led_pinout,HIGH);
        _last_led_millis = millis();
      }
    }
  }
  
  if(_led_state == 4)
  {
    if(millis() - _last_led_millis > _led_speed_3)
    {
      if(digitalRead(_led_pinout))
      {
        digitalWrite(_led_pinout,LOW);
        _last_led_millis = millis();
      }
      else
      {
        digitalWrite(_led_pinout,HIGH);
        _last_led_millis = millis();
      }
    }
  }
}