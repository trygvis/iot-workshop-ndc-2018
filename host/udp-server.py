#!/usr/bin/env python3

import socket

UDP_IP = "0.0.0.0"
UDP_PORT = 5005

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.bind((UDP_IP, UDP_PORT))

buffser_size = 64 * 1024

while True:
    data, (remote_ip, remote_port) = sock.recvfrom(buffser_size)
    s = data.decode("utf-8", "ignore")
    print("=> {}:{}: size={}, packet={}".format(remote_ip, remote_port, len(data), s))
    sock.sendto(data, (remote_ip, remote_port))

