int LED = 8; //connect the led to pin no. 8
#define Float_Switch 3 //set the float switch to pin 3

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(Float_Switch,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(Float_Switch)==HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
    
  }
  
}
