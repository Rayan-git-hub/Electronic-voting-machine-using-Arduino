
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(2)==1){
    digitalWrite(13,HIGH);
  }  // turn the LED on (HIGH is the voltage level)
  else{                     // wait for a second
  digitalWrite(13,LOW);   // turn the LED off by making the voltage LOW                  // wait for a second
}}
