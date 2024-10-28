#ifndef LUGAR_H
#define LUGAR_H
#include "Individuo.h"

class Lugar
{
    protected:
        int tamArray; //TAMAÑO DEL ARRAY
        Individuo* arrIndividuo; // ARRAY DE INDIVIDUOS

    public:
        Lugar();
        virtual ~Lugar();
};
#else
class Lugar;

#endif // LUGAR_H
