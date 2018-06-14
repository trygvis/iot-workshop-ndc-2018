# Assignment: Blink a led

## Goal

Check that your local environment is working properly.

## Configure the Arduino IDE

1. Make sure the "ESP8266" core is installed. If it is not installed
   follow the installation instructions:

   [https://github.com/esp8266/Arduino#installing-with-boards-manager](https://github.com/esp8266/Arduino#installing-with-boards-manager)

1. Under *Tools* -> *Board* make sure that "NodeMCU 1.0 (ESP-12E
   Module)" is available and selected.

1. Select the correct serial port: *Tools -> Port*.

1. Select the highest upload speed: *Tools -> Upload Speed*.

1. Create a new sketch with *File* -> *New* and compile it with *ctrl-R*.

## Step 1

Wire up this schematic on the bread board:

![](schematic/blink-a-led_schem.pdf)

![](schematic/blink-a-led_bb.pdf)

The colors on the wires used does not matter. The resistors
orientation is not important, but the LED's orientation is important.

## Step 2

Implement `setup()` and `loop()`: In `setup()` configure the LED pin and blink the LED in `loop()`.

Use these functions:

~~~ .c++
Serial.begin(115200);
Serial.println(string);

// Pin is D1/D2/D..
// mode is INPUT or OUTPUT
pinMode(pin, mode);

// HIGH or LOW
digitalWrite(pin, state);

delay(ms);
~~~

## Tips

* It is useful to print a startup message just to see when the
  application has started.
