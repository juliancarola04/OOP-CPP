#include <Arduino.h>
#include "Actuadores/Led/LedONOFF/ledonoff.hpp"
#include "Actuadores/Led/LedRGB/ledrgb.hpp"
#include "Actuadores/Rele/ReleTemporizado/reletemporizado.hpp"
#include "Actuadores/Motor/MotorPWM/motorpwm.hpp"
#include "Actuadores/Motor/MotorONOFF/motoronoff.hpp"

bool ledEncendido = true;
LedOnOff ledonoff("MiLed", 5, ledEncendido);
LedRGB ledrgb("MiRGB", 9, 10, 11, true, 255, 255, 0);

ReleTemporizado releTemporizado("MiRele", 7, false, true, 2000, 5000);

MotorPWM motor("MiMotor", 6, false, 128);

MotorOnOff motorOnOff("MiMotorOnOff", 8, false);

const unsigned long intervalo = 500;
unsigned long tiempoPasado = 0;

void setup() {
  ledonoff.begin();
  ledrgb.begin();
  releTemporizado.begin();
  motorOnOff.begin();
  motor.begin();
  motor.encender();
  tiempoPasado = millis();
}

void loop() {
  releTemporizado.actualizar();
  unsigned long tiempoActual = millis();
  if (tiempoActual - tiempoPasado >= intervalo) {
    tiempoPasado = tiempoActual;
    ledEncendido = !ledEncendido;
    if (ledEncendido) {
      ledonoff.encender();
    } else {
      ledonoff.apagar();
    }
  }
}
