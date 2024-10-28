#include "Jugador.h"

string leer(string dato)
{
    string aux;
    do
    {
        cout << dato;
        getline (cin, aux);
    }while (aux.empty());
    return aux;
}

Jugador::Jugador()
{
    //ctor
}

Jugador::~Jugador()
{
    //dtor
}
