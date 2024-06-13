#include <Arduino.h>

#define BUTTON_PIN = 4 

void setup()
{
    Serial.begin(9600);
    int on = 0;
    pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop()
{
    Serial.println(digitalRead(BUTTON_PIN)); //prints status
    if(digitalRead(BUTTON_PIN) == LOW)
    {
        on = 1;
        //EDF Fan activation code here
    }
    delay(100); //delay can be adjusted

}