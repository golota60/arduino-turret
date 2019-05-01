
const int int1=8;
const int int2=9;
const int int3=10;
const int int4=11;
const int horizontalPin=A0;
const int pressPin=7;
const int laserPin=6;
int buttonState=0;

void setup() {
  // put your setup code here, to run once:
pinMode(int1,OUTPUT);
pinMode(int2,OUTPUT);
pinMode(int3,OUTPUT);
pinMode(int4,OUTPUT);

pinMode(laserPin,OUTPUT);
pinMode(pressPin,INPUT_PULLUP);


}

void loop() {
  // put your main code here, to run repeatedly:
if(buttonState==0){
  digitalWrite(laserPin,HIGH);
  }else{
    digitalWrite(laserPin,LOW);
    }

if(digitalRead(pressPin)==0){
  buttonState=!buttonState;
  delay(200);
  }


if(analogRead(horizontalPin)>650){

digitalWrite(int1,HIGH);
digitalWrite(int2,LOW);
digitalWrite(int3,LOW);
digitalWrite(int4,LOW);

delay(2);

digitalWrite(int1,LOW);
digitalWrite(int2,HIGH);
digitalWrite(int3,LOW);
digitalWrite(int4,LOW);

delay(2);

digitalWrite(int1,LOW);
digitalWrite(int2,LOW);
digitalWrite(int3,HIGH);
digitalWrite(int4,LOW);

delay(2);

digitalWrite(int1,LOW);
digitalWrite(int2,LOW);
digitalWrite(int3,LOW);
digitalWrite(int4,HIGH);

delay(2);
}

if(analogRead(horizontalPin)<350){

digitalWrite(int1,HIGH);
digitalWrite(int2,LOW);
digitalWrite(int3,LOW);
digitalWrite(int4,LOW);

delay(2);

digitalWrite(int1,LOW);
digitalWrite(int2,LOW);
digitalWrite(int3,LOW);
digitalWrite(int4,HIGH);

delay(2);

digitalWrite(int1,LOW);
digitalWrite(int2,LOW);
digitalWrite(int3,HIGH);
digitalWrite(int4,LOW);

delay(2);

digitalWrite(int1,LOW);
digitalWrite(int2,HIGH);
digitalWrite(int3,LOW);
digitalWrite(int4,LOW);

delay(2);
}

}
