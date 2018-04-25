#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

#include "config.h"

WiFiUDP Udp;
unsigned int localUdpPort = 5006;
IPAddress host_ip(192, 168, 10, 151);
unsigned int host_port = 5005;

const int out_buf_len_start = 100;
const int out_buf_len_increment = 100;
const int out_buf_len_max = 2200;

char buf[out_buf_len_max];
int out_buf_len;

static const char alphabet[] = "abcdefghijklmnopqrstuvxyz";

unsigned long time_start, time_end;

void setup() {
  Serial.begin(115200);

  Serial.printf("Connecting to %s ", wifi_ssid);
  WiFi.begin(wifi_ssid, wifi_password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" connected");

  Udp.begin(localUdpPort);
  time_start = millis();
  out_buf_len = out_buf_len_start;
}

void loop() {

  if (millis() > (time_start + 1000)) {
    for (int i = 0; i < out_buf_len; i++) {
      buf[i] = alphabet[i % sizeof(alphabet) - 1];
    }
    out_buf_len += out_buf_len_increment;
    if (out_buf_len > out_buf_len_max) {
      out_buf_len = out_buf_len_start;
    }
    Serial.printf("Sending %d bytes to %s:%d\n", out_buf_len, host_ip.toString().c_str(), host_port);
    Udp.beginPacket(host_ip, host_port);
    Udp.write(buf, out_buf_len);
    time_start = millis();
    auto ok = Udp.endPacket();

    if (!ok) {
      Serial.printf("Could not send packet with size %d\n", out_buf_len);
    }
  }

  int len = Udp.parsePacket();
  if (len) {
    time_end = millis();
    Serial.printf("RX %s:%d: size=%d\n", Udp.remoteIP().toString().c_str(), Udp.remotePort(), len);
    int len = Udp.read(buf, sizeof(buf));
    Serial.printf("len=%d\n");
    if (len > 0) {
      buf[len] = 0;
    }
    Serial.printf("RTT: %d ms. Payload:%s\n", int(time_end - time_start), buf);
  }
}

