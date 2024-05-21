int red1=4;
int green1=6;
int yellow1=5;
int red2=9;
int green2=7;
int yellow2=8;
int sensor1=3;
int sensor2=10;


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
