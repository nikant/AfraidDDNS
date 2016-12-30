/*
freedns.afraid.org updater

Simply place files "afraidddns.h" and "afraidddns.ino"
use
#include "afraidddns.h"
in your main program and call updateAfraid(); when needed
*/

#include <WiFiClient.h>


void updateAfraid() {
  String thehost = F("freedns.afraid.org");
  String urlstring = F("/dynamic/update.php?");

  urlstring += AFRAIDHOSTHASH;

  // Use WiFiClient class to create TCP connections
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(thehost.c_str(), httpPort)) {
    Serial.println(F("connection failed"));
    return;
  }

  // This will send the request to the server
  client.print(String("GET ") + urlstring + " HTTP/1.1\r\n" +
               "Host: " + thehost + "\r\n" +
               "Connection: close\r\n\r\n");
  delay(2000);
  client.flush();
  client.stop();
  delay(100);
}
