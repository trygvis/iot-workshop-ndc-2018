# Assignment: MQTT

## Goal

Get aquainted with MQTT.

## Steps

1. Connect to the Wi-Fi network
    * Use `WiFi.localIP()`

1. Connect to MQTT broker
1. Publish temperature
1. Implement last will to indicate online status
1. Implement subscription to reconfigure device
    1. Change temperature report interval

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

**1:** Print the heap at regular intervals.

**2:** Implement min, max and average temperature over configured interval.

Suggested parameters:

* Sample interval: 2 seconds
* Publish interval: 10 seconds

**3:** Make sure the values are calculated even if we're reconnecting to the Wi-Fi or MQTT server.
