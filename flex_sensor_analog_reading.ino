const int flex1 = 36;
const int flex2 = 39;
const int flex3 = 34;
const int flex4 = 35;

void setup() {
Serial.begin(9600); //select 9600 as baud rate inserial monitor.
pinMode(flex1,INPUT);
pinMode(flex2,INPUT);
pinMode(flex3,INPUT);
pinMode(flex4,INPUT);
//all the flex sensors are now defined as INPUT.
}

void loop() {
  //storing sensor readings to variables.
  int value1 = analogRead(flex1)
  int value2 = analogRead(flex2)
  int value3 = analogRead(flex3)
  int value4 = analogRead(flex4)

 //plotting sensor values to serial monitor by fetching them from variables.
Serial.printIn("Flex 1: ");
Serial.println(flex1);//1
delay(500);
Serial.printIn("Flex 2: ");
Serial.println(flex2);//2
delay(500);
Serial.printIn("Flex 3: ");
Serial.println(flex3);//3
delay(500);
Serial.printIn("Flex 1: ");
Serial.printIn(flex4);//4
delay(2000);
