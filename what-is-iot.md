---
title: "IoT Workshop"
author: Trygve Laugstøl \<trygvis@trygvis.io\>
header-includes:
  - \hypersetup{colorlinks=true,
            allbordercolors={0 0 0},
            pdfborderstyle={/S/U/W 1}}
  - \usepackage{fontspec}
	\setsansfont{Verdana}
---

# What is IoT

## What is IoT

* Not "a computer connected to the internet"
    * Then it is really just another computer connected to the internet

* Must be something else
    * It is simply devices that are resource constrained
        * Usually in more than one way

* Autonomous operation, the connection might not be permanent

## IoT is just a concept

* *The Internet of Things (IoT) is the network of physical devices, vehicles, home appliances and other items embedded with electronics, software, sensors, actuators, and connectivity which enables these objects to connect and exchange data.*^[Wikipedia "Internet of Things"]

## What differentiates a computer from an IoT device?

* Constrained in (one or more of):
    * Memory
    * CPU
    * Network bandwidth and/or latency
    * Storage

# Going back to basics

## What is the internet again?

## OSI model

1. Physical Layer
1. Data Link Layer
1. Network Layer
1. Transport Layer
1. Session Layer
1. Presentation Layer
1. Application Layer


* [Wikipedia: OSI model](https://en.wikipedia.org/wiki/OSI_model)
* [Wikipedia: OSI model#Examples](https://en.wikipedia.org/wiki/OSI_model#Examples)

::: notes

Følges ikke veldig slavisk

:::

## Layer 1: Physical Layer

* 10BASE5, 10BASE2
* 10BASE-T / 100BASE-TX / 1000BASE-TX
* 802.11a/b/g/n PHY
* RS-232

::: notes

Huber og switcher (som gjør en slags routing) er ikke en av disse lagene. Mere en implementasjonsdetalj.
RS-232 sin signallering brukes i *alle* MCUer, mange har flere porter tilgjengelige. Kun signallering, ikke spenningsnivåer. Mange støtter veldig høye datarater (>= 1Mbit/s)

:::


## Layer 2: Data Link Layer

* Ethernet
* WiFi
* Bluetooth
* Token Ring

## Layer 3: Network Layer

* IP
* ICMP
* IPX

## Layer 4: Transport Layer

* TCP
* UDP

## Layer 5: Session Layer

* "sockets"
* NetBIOS

## Layer 6: Presentation Layer

* SSL

::: notes

This layer is not really much used in the IP stack

:::

## Layer 7: Application Layer

* HTTP
* MQTT
* DNS
* (everything else..)

## Details: IP

![](images/ip-header.svg)

## Details: IP

![](images/ip-header.pdf)

## Details: IP

![](images/IP-Header_eng.pdf)

# Notes

## Assignments

* Measure round trip time/latency. Measure UDP, TCP. Measure when the
  packet size is greater than the MTU
