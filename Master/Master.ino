#include <Wire.h>
#include <RealTimeClockDS1307.h>

void setup() 
{
int hours=11,minutes=4,i;
  RTC.setHours(hours);
  RTC.setMinutes(minutes);
  //RTC.setSeconds(seconds);
  RTC.setClock();
  for(i=2;i<14;i++)
  {
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}
 
void loop() 
{
  delay(1000);
  RTC.readClock();
 int hours=RTC.getHours();
 int minutes=RTC.getMinutes();
 Serial.print(hours);
 Serial.print(":");
 Serial.println(minutes);
 int h[6],m[6],i=5;
 while(i>=0)
 {
  h[i] = hours%2;
  hours = hours/2;
  Serial.println(h[i]);
  m[i] = minutes%2;
  minutes = minutes/2;
  Serial.println(m[i]);
  i--;
 }
 Serial.println();
 for(i=2;i<7;i++)
 {
  if(h[i-1]==1)
    digitalWrite(i,HIGH);
  else
    digitalWrite(i,LOW);
  if(m[i-2]==1)
    digitalWrite(i+5,HIGH);
  else
    digitalWrite(i+5,LOW);
 }
 if(m[5]==1)
    digitalWrite(12,HIGH);
 else
    digitalWrite(12,LOW);
 digitalWrite(13,HIGH);
 delay(1000);
 for(i=2;i<14;i++)
    digitalWrite(i,LOW);
}
