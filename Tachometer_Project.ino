int tachPin = 9;
int tachDelay = 10000;

void setup() {
  pinMode(tachPin, OUTPUT);
  tone(tachPin, 33);
  delay(2000);
  tone(tachPin, 388);
  delay(2000);
  tone(tachPin, 33);
  delay(1000);
  delay(2000);
  tone(tachPin, 388);
  delay(1000);
  tone(tachPin, 200);
  delay(1000);
  tone(tachPin, 300);
  delay(1000);
  tone(tachPin, 166);
  delay(1000);
  tone(tachPin, 300);
  delay(1000);
  tone(tachPin, 233);
  delay(1000);
  tone(tachPin, 178);
  delay(1000);
  tone(tachPin, 300);
  delay(500);
  tone(tachPin, 33);

}

void loop() {
  //tone(tachPin, 33); // 1000 RPM
  //delay(tachDelay);
  //tone(tachPin, 66); // 2000 RPM
  //delay(tachDelay);
  //tone(tachPin, 100); // 3000 RPM
  //delay(tachDelay);
  //tone(tachPin, 133); // 4000 RPM
  //delay(tachDelay);
  //tone(tachPin, 166); // 5000 RPM
  //delay(tachDelay);
  //tone(tachPin, 200); // 6000 RPM
  //delay(tachDelay);
  //tone(tachPin, 233); // 7000 RPM
  //delay(tachDelay);
  //tone(tachPin, 266); // 8000 RPM
  //delay(tachDelay);
  //tone(tachPin, 300); // 9000 RPM
  //delay(tachDelay);
  //tone(tachPin, 388); // 10000 RPM
  //delay(tachDelay);
  


}