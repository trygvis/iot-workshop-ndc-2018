const int LED_PIN = D0;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();
  Serial.println("Hello world!");
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("HIGH");
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  Serial.println("LOW");
  delay(1000);
}

