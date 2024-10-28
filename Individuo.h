#ifndef INDIVIDUO_H
#define INDIVIDUO_H
#include <iostream>
#include <string>
#include "Validar.h"

class Individuo
{
    protected:
        bool vivo; // EL INDIVIDUO SIGUE VIVO O MUERTO

    public:
        Individuo();
        void saltar();
        virtual ~Individuo();
};
#else
class Individuo;

#endif // INDIVIDUO_H