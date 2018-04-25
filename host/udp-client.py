#!/usr/bin/env python3

import socket, asyncoro

ip = "127.0.0.1"
ip = "192.168.10.151"
port = 5005
msg = "Hello, World!"

print("UDP target IP:   {}".format(ip))
print("UDP target port: {}".format(port))
print("message:         {}".format(msg))

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

start = None

def client(coro=None):
    buffer_size = 64 * 1024
    print("Waiting for packet")
    msg, (ip, port) = yield sock.recvfrom(buffer_size)
    end = time.process_time()
    print("Received '{}' from {}:{}".format(msg, ip, port))
    print("RTT: {:.3f} ms".format((end - start) * 1000))

asyncoro.Coro(client)
import time
time.sleep(0.1)
print("Sending")
start = time.process_time()
sock.sendto(msg.encode("utf-8"), (ip, port))
