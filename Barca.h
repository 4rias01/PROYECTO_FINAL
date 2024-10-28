#ifndef BARCA_H
#define BARCA_H
#include "Lugar.h"

class Barca: public Lugar
{
    protected:

    public:
        Barca();
        void moverse(); /// LA BARCA SE MUEVE DE ORILLA A ORILLA
        virtual ~Barca();
};
#else
class Barca;

#endif // BARCA_H
