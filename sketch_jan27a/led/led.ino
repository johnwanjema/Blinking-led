int led = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); 
  Serial.println("led on");
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);
   Serial.println("led of");
    // turn the LED off by making the voltage LOW
  delay(1000);
}
