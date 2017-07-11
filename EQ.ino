// Breadboard'da 1. pine mavi 2. pine yeşil 3. pine yeşil 4. pine kırmızı tak A0'a da Sound Sensor'ü tak
// This basic equalizer project requires Grove Kit Base Shield, Grove Kit Sound Sensor and Libraries, an RGB LED (3 seperate LEDs can be used aswell) and a development board which supports the shield such as Intel Edison™ or Arduino™ Mega etc. 
// RGB LED pins are 4 - 2,3 - 1 respectively. There are 2 green LED lights. A0 Analog pin is used for the Grove Sound Sensor. 
// Okadar ingilizce yazdım yazık.
// Nickelback <3 (kek)

#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

int mavi     = 1;
int yesil1   = 2;
int yesil2   = 3; // Additional
int kirmizi  = 4;
int threshold = 900;
int volume;

void setup() {                
  Serial.begin(9600); // For debugging
  pinMode(mavi, OUTPUT);   
  pinMode(yesil1, OUTPUT);
  pinMode(yesil2, OUTPUT);
  pinMode(kirmizi, OUTPUT);
  lcd.begin(16,2);
}

void loop() {
  volume = analogRead(A0); // Reads the value from the Analog PIN A0
  Serial.println(volume);
  delay(100);
  
if(volume = 0){
  digitalWrite(mavi,LOW);
  digitalWrite(yesil1,LOW);
  digitalWrite(yesil2,LOW);
  digitalWrite(kirmizi,LOW);
}
  
  
else if(volume < 300){
  digitalWrite(mavi, HIGH); //Turn ON Led
  }

  
else if(volume >= 300 && volume < 500){
  digitalWrite(mavi, HIGH);
  digitalWrite(yesil1,HIGH); // Turn OFF Led
  }
  
  
else if(volume >= 500 && volume < 700){
  digitalWrite(mavi,HIGH);
  digitalWrite(yesil1,HIGH);
  digitalWrite(yesil2,HIGH);
   }


else if(volume>= 700 && volume <= 900){
  digitalWrite(mavi,HIGH);
  digitalWrite(yesil1,HIGH);
  digitalWrite(yesil2,HIGH);
  digitalWrite(kirmizi,HIGH);
  }

}
