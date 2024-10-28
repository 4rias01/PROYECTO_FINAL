#ifndef CONEJO_H
#define CONEJO_H
#include "Jugador.h"

class Conejo: public Jugador
{
    protected:

    public:
        Conejo();
        void comerLechuga();
        virtual ~Conejo();
};
#else
class Conejo;

#endif // CONEJO_H
