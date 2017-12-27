/*
  ntp library
  get time from Internet
*/
#ifndef ntp
#define ntp

#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

const int NTP_PACKET_SIZE = 48;

class Ntp {
public:
  Ntp(char* ntpServerName);
private:
  byte packetBuffer[ NTP_PACKET_SIZE ];
  WiFiUDP udp;
};

#endif
