#ifndef ZORRO_H
#define ZORRO_H
#include "Jugador.h"

class Zorro: public Jugador
{
    protected:

    public:
        Zorro();
        void ComerConejo(); // ZORRO SE COME AL CONEJO
        virtual ~Zorro();
};
#else
class Zorro;

#endif // ZORRO_H
