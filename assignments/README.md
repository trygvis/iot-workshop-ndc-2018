# Assignment preparations

# Drivers

## Install Arduino IDE

Download and install from https://www.arduino.cc/en/Main/Software. The
workshop is tested with version 1.8.5.

## Install ESP8266 board support

Follow the instructions on
https://github.com/esp8266/Arduino#installing-with-boards-manager

## Testing the Arduino installation

In the menu Tools -> Board there should be a list of "ESP8266 boards"
which should include "NodeMCU 1.0 (ESP-12E Module)".

## Install some libraries

* PubSubClient
* Time
* TimeAlarms
* WifiManager

## Install Python 3

Use your favorite package manager or download from
https://www.python.org/downloads/. Make sure `virtualenv` is
installed.

### Create a virtualenv for the assignments

On Windows you might not need the `-p python3` argument.

    $ cd host
    $ virtualenv -p python3 env
    $ env/bin/pip install -r requirements.txt

To test that everything was properly installed run python and execute
`import asyncore`:

    $ env/bin/python
    Python 3.6.5rc1 (default, Mar 14 2018, 06:54:23)
    [GCC 7.3.0] on linux
    Type "help", "copyright", "credits" or "license" for more information.
    >>> import asyncore

## Install Mosquitto

Either install Mosquitto server and client packages from your
platform's package manager or download and follow the instructions
from https://mosquitto.org/.

After installation you should have the commands `mosquitto_pub` and
`mosquitto_sub` available.

## Install Wireshark (optional)

Either install the Wireshark packages from your platform's package
manager or download and follow the instructions
https://www.wireshark.org/.
