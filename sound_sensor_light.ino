#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int ledpin=8; // ledpin and soundpin are not changed throughout the process 
const int soundpin=7; // sets threshold value for sound sensor
void setup() {
    lcd.begin(16, 2);
  
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(soundpin,INPUT);
}
void loop() {
int soundsens=digitalRead(soundpin); // reads analog data from sound sensor
if (soundsens==1) {
digitalWrite(ledpin,HIGH);
lcd.print("LIGHT ON");//turns led on
delay(4000);
lcd.clear();
}
else{
digitalWrite(ledpin,LOW);
lcd.print("LIGHT OFF");
delay(1000);
lcd.clear();
}
}
