# IoT Workshop @ NDC Oslo 2018

<a rel="license" href="http://creativecommons.org/licenses/by/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by/4.0/88x31.png" /></a><br /><span xmlns:dct="http://purl.org/dc/terms/" property="dct:title">Connect your Arduino to the internet</span> by <a xmlns:cc="http://creativecommons.org/ns#" href="https://github.com/trygvis/iot-workshop-ndc-2018" property="cc:attributionName" rel="cc:attributionURL">Trygve Laugstøl</a> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by/4.0/">Creative Commons Attribution 4.0 International License</a>.

This is the materials for a 1 hour workshop on IoT.

> *Connect your Arduino to the internet.*
>
> In this workshop we will use a production quality device in a
> developer friendly package and connect it to the internet. We will
> cover the Arduino APIs for wifi and MQTT and use these to get the
> device to send and react on messages.
>
> Basic programming knowledge and some Arduino experience is assumed.
> We will not focus much on the electronics aspects of the board, but
> that will be covered in the "Getting Started With Arduino" workshop.
>
> Requirements: 
> You will need an Arduino-kit to attend this workshop. The kit can be
> purchased for 300NOK at the Bitraf stand.
>
> There are some software that you should have installed, check with
> the person at the Bitraf stand.

# Preparations

* Install Arduino IDE
* Install the "ESP8266 core" for Arduino, follow the guide on
  https://github.com/esp8266/Arduino#installing-with-boards-manager.
* Install PubSubClient library with Library manager from within the
  Arduino IDE.

# Documents

* [Assignment: Blink a LED](https://cdn.rawgit.com/trygvis/iot-workshop-ndc-2018/master/assignments/blink-a-led/blink-a-led.pdf)
* [Assignment: MQTT with button](https://cdn.rawgit.com/trygvis/iot-workshop-ndc-2018/master/assignments/mqtt-with-button/mqtt-with-button.pdf)
* [Slides](https://cdn.rawgit.com/trygvis/iot-workshop-ndc-2018/master/slides/connected-arduino-slides.pdf)

# Credits

* Some TikZ diagrams where taken from:
  https://github.com/tabascoeye/TikZ-diagrams/tree/master/networking
  (Beerware licensed)
* NodeMCU picture from: https://i2.wp.com/electronilab.co/wp-content/uploads/2016/02/NodeMCU-%E2%80%93-Board-de-desarrollo-con-m%C3%B3dulo-ESP8266-WiFi-y-Lua-4.jpg
* Fritzing model of NodeMCU: https://github.com/roman-minyaylov/fritzing-parts/tree/master/esp8266-nodemcu-v3
* Arduino ESP8266 documentation: https://media.readthedocs.org/pdf/arduino-esp8266/latest/arduino-esp8266.pdf
* DHT11/DHT22 documentation: https://cdn-learn.adafruit.com/downloads/pdf/dht.pdf
