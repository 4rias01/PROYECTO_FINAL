#ifndef ROBOT_H
#define ROBOT_H
#include "Jugador.h"

class Robot: public Jugador
{
    protected:

    public:
        Robot();
        virtual ~Robot();
};
#else
class Robot;

#endif // ROBOT_H
