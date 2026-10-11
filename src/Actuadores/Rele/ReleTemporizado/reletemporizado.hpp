#ifndef RELETEMPORIZADO_HPP
#define RELETEMPORIZADO_HPP

#include "../ReleONOFF/releonoff.hpp"

class ReleTemporizado : public ReleOnOff {
    private:
        unsigned long _tiempoOn;
        unsigned long _tiempoOff;
        unsigned long _tiempoPasado;
    public:
        ReleTemporizado(const char* nombre, int pin, bool estado, bool activoEnBajo,
                        unsigned long tiempoOn, unsigned long tiempoOff);
        void encender() override;
        void apagar() override;
        void actualizar();
        void ajustarTiempos(unsigned long tiempoOn, unsigned long tiempoOff);
};

#endif
