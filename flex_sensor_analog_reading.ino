const int flex1 = 36;
const int flex2 = 39;
const int flex3 = 34;
const int flex4 = 35;
int Value =0;
void setup() {
Serial.begin(115200);
pinMode(flex1,INPUT);
pinMode(flex2,INPUT);
pinMode(flex3,INPUT);
pinMode(flex4,INPUT);

delay (1000);
}

void loop() {
  

Serial.println(analogRead(39));//2
Serial.println(analogRead(34));//3
Serial.println(analogRead(35));//4
delay(1000);
}
