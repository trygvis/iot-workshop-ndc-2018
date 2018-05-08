#include <DHT.h>
#include <DHT_U.h>

const auto DHTPIN = D1;
const auto DHTTYPE = DHT22;

DHT_Unified dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  pinMode(D2, INPUT);
  pinMode(D0, OUTPUT);
}

void loop() {
  if (digitalRead(D2) == HIGH) {
    Serial.println("HIGH");
  } else {
    Serial.println("LOW");
  }
  digitalWrite(D0, digitalRead(D2));
  delay(100);
}

