# Assignment: Blink a led

## Goal

Check that your local environment is working properly.

## Configure the Arduino IDE

Under *Tools* -> *Board* make sure that "NodeMCU 1.0 (ESP-12E Module)"
is available and selected.

Create a new sketch with *File* -> *New* and compile it with *ctrl-R*.

## Step 1

Wire up this schematic on the bread board:

![](schematic/assignment-1_schem.pdf)

![](schematic/assignment-1_bb.pdf)

The colors on the wires used does not matter. The resistors
orientation is not important, but the LED's orientation is important.

## Step 2

Implement `setup()` and `loop()`. In `setup()` configure the LED pin and blink the LED in `loop()`.

Use these functions:

~~~ .c++
Serial.begin(115200);
Serial.println(string);

pinMode(pin, mode);
digitalWrite(pin, state); // HIGH or LOW
delay();
~~~

## Tips

* It is useful to print a startup message just to see when the
  application has started.
