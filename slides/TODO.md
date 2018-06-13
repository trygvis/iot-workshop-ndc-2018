Slide: *Device and application architecture with MQTT*

* Add one-way pointers for TCP, keep existing as MQTT messaging.
  Illustrates that everyone connects to the broker, but messages can
  be pushed. Contrast to HTTP.

Slide: *MQTT on Arduino*
* flytt callback til egen slide.
* legg til Serial.println("connecting"); og Serial.println("connected");
* sett mqtt_server = "trygvis.io";
ditto på neste slide

* vis client_id

* Assignments: D0 is the pin to use.


MQTT
* fix switch orientation
* husk å gjøre preparations
* screen shot av library manager og installering av PubSubClient

* vis hvordan man formaterer stringer., clientId og subscription patterns.
