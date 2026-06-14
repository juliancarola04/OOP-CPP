#include "../led.hpp"

class LedOnOff : public Led{
    private:
        unsigned long _tiempoActual;
        unsigned long _tiempoPasado;
        unsigned long _intervalo;

    public:
        LedOnOff(char nombre[LARGO_NOMBRE], int pin, bool estado, unsigned long tiempo);
        void encender() override final;
        void apagar() override final;
        void ajustarIntervalo(unsigned long intervalo);
        void actualizar();
        unsigned long getTiempoActual();
        unsigned long getTiempoPasado();
        unsigned long getIntervalo();
};