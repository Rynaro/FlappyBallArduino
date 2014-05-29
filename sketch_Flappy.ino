const int btn = 2;
float mapped_pot;

void setup() {
  Serial.begin(9600);
  pinMode(btn, INPUT);
}

void loop() {
  mapped_pot = map(analogRead(A0), 0, 1023, 325, 700)/100.0;
  Serial.print(mapped_pot);
  Serial.print("/");
  Serial.println(digitalRead(btn));
  delay(100);
}
