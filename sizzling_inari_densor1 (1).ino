int sensorPIR = 7;
int led = 6;

void setup() {
  pinMode(sensorPIR, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int movimento = digitalRead(sensorPIR);

  if (movimento == HIGH) {
    digitalWrite(led, HIGH);  
  } else {
    digitalWrite(led, LOW);  
  }
}