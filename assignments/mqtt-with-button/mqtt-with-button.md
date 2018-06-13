# Assignment: MQTT with button

## Goals

* Get aquainted with MQTT.
* Publish a message when a button is pressed.

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

* Publish a message on button press

## Tips

To generate a client id make something with `ESP.getChipId()`{.cpp}

Creating a `String` from a number:

* `String(123) => "123"`{.cpp}
* Hex formatted: `String(0x123abc, HEX) => "123abc"`{.cpp}

Some APIs require "plain C strings" aka a `char *`{.cpp}. They can be converted with `String::c_str()`:

~~~.c++
char *cStr = myString.c_str();
~~~

## Bonus

**1:** Print the heap free size at regular intervals.

**2:** Implement min, max and average temperature over configured interval.

Suggested parameters:

* Sample interval: 2 seconds
* Publish interval: 10 seconds

**3:** Make sure the values are calculated even if we're reconnecting to the Wi-Fi or MQTT server.
