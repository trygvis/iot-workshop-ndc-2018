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

* Tip: change upload speed to max.

* Read button in `loop()`. If the button's state changes, print a
  message.

*Note:* reading the button in a busy loop is not really a best
practice as it uses lots of energy. Instead use the `attachInterrupt`.

# Step 3

* Connect to the Wi-Fi network
* Connect to MQTT broker

# Step 4

* Publish a message on button press on the topic
  `ndc/$device-id/button`

# Step 5 (Bonus)

Subscripe to a topic and do something with the led.

* Subscribe to the topic you're publishing to.

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
