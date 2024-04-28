const int buzzer = 9;
const int buttonPin = 7;
int buttonState = 0;

void setup() {
// put your setup code here, to fun once:
Serial.begin(9600);
pinMode(buzzer,OUTPUT);
pinMode(buttonPin,INPUT);
 }

void loop() {
 // put your main code here, to run repeatedly:
 buttonState = digitalRead(buttonPin);
 if(buttonState== HIGH)
 {
tone(buzzer, 3000);
Serial.println("Buzzer ON");
 } else {
 noTone(buzzer);
 Serial.println("Buzzer OFF");
 }
}