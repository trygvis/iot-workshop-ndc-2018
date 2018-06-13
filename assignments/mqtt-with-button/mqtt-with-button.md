# Assignment: MQTT with button and LED

## Goals

* Get aquainted with MQTT.
* Publish a message when a button is pressed.
* Subscribe to a topic to control the LED

## Step 1

Wire up this schematic on the bread board:

![](schematic/mqtt-with-button_schem.pdf)

![](schematic/mqtt-with-button_bb.pdf)

# Step 2

* Read button, print message on terminal

# Step 3

* Connect to the Wi-Fi network
    * Use `WiFi.localIP()`

* Connect to MQTT broker

# Step 4

* Publish a message on button press on the topic
  `ndc/$device-id/button`

# Step 5 (Bonus)

* Subscribe to the topic `ndc/$device-id/led`.
 
* Use the value to for example turn the LED on/off, or change the
  LED's blinking pattern.

## Tips

To generate a client id make something with `ESP.getChipId()`{.cpp}

Creating a `String` from a number:

* `String(123) => "123"`{.cpp}
* Hex formatted: `String(0x123abc, HEX) => "123abc"`{.cpp}

Some APIs require "plain C strings" aka a `char *`{.cpp}. They can be
converted with `String::c_str()`:

~~~.c++
char *cStr = myString.c_str();
~~~
