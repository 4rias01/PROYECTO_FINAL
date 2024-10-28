#ifndef ZORRO_H
#define ZORRO_H
#include "Individuo.h"

class Zorro: public Individuo
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
