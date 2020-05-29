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
  int m1[5],i;
  int flag=digitalRead(13);
  if(flag)
  {
    for(i=0;i<6;i++)
      m1[i]=digitalRead(i+2);  
    int m=m1[0]*32+m1[1]*16+m1[2]*8+m1[3]*4+m1[4]*2+m1[5];
    int min1=(m/10)%10;
    Serial.println(min1);
  }
}
