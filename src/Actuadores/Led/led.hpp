#include "../actuador.hpp"

class Led : public IActuador{
    protected:
        bool _estado;
    public:
        Led(char nombre[LARGO_NOMBRE], int pin, bool estado);
        void begin() override;
        void virtual encender() = 0;
        void virtual apagar() = 0;
};