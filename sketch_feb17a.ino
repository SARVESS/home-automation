int r1=2, r2=3, r3=4, r4=5, r5=6;
int l1=7, l2=8, l3=9, l4=10, l5=11;
int state1=0, state2=0, state3=0, state4=0, state5=0;
int indata=0,flag=0;

void setup()
{
 pinMode(r1,OUTPUT); digitalWrite(r1,LOW);
 pinMode(r2,OUTPUT); digitalWrite(r2,LOW);
 pinMode(r3,OUTPUT); digitalWrite(r3,LOW);
 pinMode(r4,OUTPUT); digitalWrite(r4,LOW);
 pinMode(r5,OUTPUT); digitalWrite(r5,LOW);
 pinMode(l1,OUTPUT); digitalWrite(l1,LOW);
 pinMode(l2,OUTPUT); digitalWrite(l2,LOW);
 pinMode(l3,OUTPUT); digitalWrite(l3,LOW);
 pinMode(l4,OUTPUT); digitalWrite(l4,LOW);
 pinMode(l5,OUTPUT); digitalWrite(l5,LOW);
 
 Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
    indata=Serial.read();
    
    if(indata=='A'){ state1=1; flag=1;}
    if(indata=='B'){ state2=1; flag=1;}
    if(indata=='C'){ state3=1; flag=1;}
    if(indata=='D'){ state4=1; flag=1;}
    if(indata=='E'){ state5=1; flag=1;}
    if(indata=='a'){ state1=0; flag=1;}
    if(indata=='b'){ state2=0; flag=1;}
    if(indata=='c'){ state3=0; flag=1;}
    if(indata=='d'){ state4=0; flag=1;}
    if(indata=='e'){ state5=0; flag=1;}
  }
  channel1(state1);
  channel2(state2);
  channel3(state3);
  channel4(state4);
  channel5(state5);

}

void channel1(int s)
{
  digitalWrite(r1,s);
  digitalWrite(l1,s);
  if(flag==1)
  {
  if(s==1) Serial.println("Channel 1 is ON.");
  else Serial.println("Channel 1 is OFF.");
  flag=0;
  }
}
void channel2(int s)
{
  digitalWrite(r2,s);
  digitalWrite(l2,s);
  if(flag==1)
  {
  if(s==1) Serial.println("Channel 2 is ON.");
  else Serial.println("Channel 2 is OFF.");
  flag=0;
  }
}
void channel3(int s)
{
  digitalWrite(r3,s);
  digitalWrite(l3,s);
  if(flag==1)
  {
  if(s==1) Serial.println("Channel 3 is ON.");
  else Serial.println("Channel 3 is OFF.");
  flag=0;
  }
}
void channel4(int s)
{
  digitalWrite(r4,s);
  digitalWrite(l4,s);
  if(flag==1)
  {
  if(s==1) Serial.println("Channel 4 is ON.");
  else Serial.println("Channel 4 is OFF.");
  flag=0;
  }
}
void channel5(int s)
{
  digitalWrite(r5,s);
  digitalWrite(l5,s);
  if(flag==1)
  {
  if(s==1) Serial.println("Channel 5 is ON.");
  else Serial.println("Channel 5 is OFF.");
  flag=0;
  }
}
