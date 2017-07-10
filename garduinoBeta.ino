int waterPump = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(waterPump, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int humidityRaw = analogRead(A0);
  int humidityReal = map(humidityRaw, 1023, 0, 0, 100);
  Serial.println(humidityReal);
  delay(100);
  if (humidityReal < 60)
  {
    digitalWrite(waterPump, LOW);
  }else{
    digitalWrite(waterPump, HIGH);
  }
}
