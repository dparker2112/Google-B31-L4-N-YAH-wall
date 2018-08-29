int dir[3]={2,3,4};
int pulse[3]={5,6,7};
void setup() {
  for(int a=0;a<3;a++){
    pinMode(dir[a],OUTPUT);
    pinMode(pulse[a],OUTPUT);
    digitalWrite(pulse[a],1);
  }
}
void loop() {
  for(int a=0;a<3;a++){
    for(int c=0;c<2;c++){
      digitalWrite(dir[a],c);
      for(int b=0;b<1600;b++){
        digitalWrite(pulse[a],1);
        delayMicroseconds(200);
        digitalWrite(pulse[a],0);
        delayMicroseconds(200);
      }
      delay(500);
    }
  }
}
