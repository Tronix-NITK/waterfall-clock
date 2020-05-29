void setup() 
{
  int i;
  for(i=2;i<7;i++)
    pinMode(i,INPUT);
  pinMode(13,INPUT);  
  Serial.begin(9600);
}

void loop() 
{
  int h2[5],i;
  int flag=digitalRead(13);
  if(flag)
  {
    for(i=0;i<5;i++)
      h2[i]=digitalRead(i+2);  
    int h=h2[0]*16+h2[1]*8+h2[2]*4+h2[3]*2+h2[4];
    int hour2=h%10;
  }
  Serial.println(hour2);
}
