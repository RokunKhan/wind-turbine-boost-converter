float PWMDelay = 50.0;
float VoltageOut;

void setup() {
pinMode(A1, INPUT);
pinMode(11, OUTPUT);
Serial.begin(9600);
}

void loop() {
  int ReadVal = analogRead(A1);

  VoltageOut = ReadVal * 5.0/1023;
  Serial.print("Voltage: ");
  Serial.println(VoltageOut);
  Serial.print("PWM Value: ");
  Serial.println(PWMDelay);
  delayMicroseconds(10);

  
  if(VoltageOut > 2.55) {
    PWMDelay -= .5;
  }

  if(VoltageOut < 2.45) {
    PWMDelay += .5;
  }
  PWMDelay = constrain(PWMDelay, 0, 100);
  analogWrite(11, map(PWMDelay, 0, 100, 0, 255));
  delay(300);

}