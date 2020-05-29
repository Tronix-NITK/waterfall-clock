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
  int h1[5],i;
  int flag=digitalRead(13);
  if(flag)
  {
    for(i=0;i<5;i++)
      h1[i]=digitalRead(i+2);  
    int h=h1[0]*16+h1[1]*8+h1[2]*4+h1[3]*2+h1[4];
    int hour1=(h/10)%10;
    Serial.println(hour1);
  }
}
