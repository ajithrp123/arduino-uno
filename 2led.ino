const int ledpin1=13;
const int ledpin2=12;
char a;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  a=Serial.read();
  if(a=='A')
  {
    digitalWrite(13,HIGH);
    
    }
    else if(a=='B')
    {
      digitalWrite(12,HIGH);
      }
      else
      {
        digitalWrite(12,LOW);
        digitalWrite(13,LOW);
        }
  }
}
