int red1=10;
int green1=8;
int yellow1=9;
int red2=13;
int green2=11;
int yellow2=12;
int sensor1=2;
int sensor2=3;


void setup() {
  // put your setup code here, to run once:
pinMode(red1,OUTPUT);
pinMode(red2,OUTPUT);
pinMode(yellow1,OUTPUT);
pinMode(yellow2,OUTPUT);
pinMode(green1,OUTPUT); 
pinMode(green2,OUTPUT);
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

 if(!digitalRead(sensor1)&&digitalRead(sensor2)){
digitalWrite(red1,LOW);
digitalWrite(green2,LOW);
digitalWrite(red2,LOW);
digitalWrite(green1,LOW);
digitalWrite(yellow1,HIGH);
digitalWrite(yellow2,HIGH);
delay(200);
while(digitalRead(sensor2)){
digitalWrite(red1,HIGH);
digitalWrite(green2,HIGH);
digitalWrite(red2,LOW);
digitalWrite(green1,LOW);
digitalWrite(yellow1,LOW);
digitalWrite(yellow2,LOW);
    }
 }





if(digitalRead(sensor1)&&!digitalRead(sensor2)){
    digitalWrite(red1,LOW);
digitalWrite(green2,LOW);
digitalWrite(red2,LOW);
digitalWrite(green1,LOW);
digitalWrite(yellow1,HIGH);
digitalWrite(yellow2,HIGH);
delay(200);
while(digitalRead(sensor1)){
digitalWrite(red1,LOW);
digitalWrite(green2,LOW);
digitalWrite(red2,HIGH);
digitalWrite(green1,HIGH);
digitalWrite(yellow1,LOW);
digitalWrite(yellow2,LOW);
  }
}


}
