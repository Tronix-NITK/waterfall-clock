void setup() 
{
  int i;
  for(i=2;i<8;i++)
    pinMode(i,INPUT);  
  pinMode(13,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int m2[5],i;
  int flag=digitalRead(13);
  if(flag)
  {
    for(i=0;i<6;i++)
      m2[i]=digitalRead(i+2);  
    int m=m2[0]*32+m2[1]*16+m2[2]*8+m2[3]*4+m2[4]*2+m2[5];
    int min2=m%10;
    Serial.println(min2);
  }
}
