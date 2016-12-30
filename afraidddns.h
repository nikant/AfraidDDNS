/*
freedns.afraid.org updater

Simply place files "afraidddns.h" and "afraidddns.ino"
use
#include "afraidddns.h"
in your main program and call updateAfraid(); when needed
*/

// define your afraid.org subdomain hash
// you can find the hash by logging in https://freedns.afraid.org/dynamic/
// and checking the URL at the bottom of the page where it says Direct URL
// i.e. https://freedns.afraid.org/dynamic/update.php?VxxxxxxxxxxFDGxxxxxxxxxx1xxxxxRTTxxxxxESP8
#define AFRAIDHOSTHASH "VxxxxxxxxxxFDGxxxxxxxxxx1xxxxxRTTxxxxxESP8"

void updateAfraid();
