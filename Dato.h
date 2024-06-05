#ifndef DATO_H
#define DATO_H

#include <iostream>
using namespace std;

class Dato {
    public:
        string clave;
        char valor;
        Dato(string clave, char valor);
        string to_string();
};

#endif