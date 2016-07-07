#include <PIEled.h>

#define TESTBTN_PIN 5

int led_state = 0;

PIEled led;

void setup() 
{
  led.setPin(8);
  led.setState(0);
}

void loop() 
{
  if(!digitalRead(TESTBTN_PIN))
  {
    if(led_state < 5)
    {
      led_state = led_state+1;
    }
    if(led_state == 5)
    {
      led_state = 0;
    }
    led.setState(led_state);
    delay(500);
  }
  led.loop();
  delay(10);
}
