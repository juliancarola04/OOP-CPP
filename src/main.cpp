#include <Arduino.h>
#include <./Actuadores/Led/LedONOFF/ledonoff.hpp>

LedOnOff ledonoff((char *) "MiLed", 5, true, 500);

void setup() {
  ledonoff.begin();
}

void loop() {
  ledonoff.actualizar();
}