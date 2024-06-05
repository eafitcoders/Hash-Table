#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Lista.h"

class HashTable {
    public:
        HashTable();

        Lista* hash[10]; //lista de listas enlazadas
        void insertar(string clave, char valor);
        Dato* buscar(string clave);
        void eliminar(string clave);
        void imprimir();

    private:
        int hashFunction(string clave);
};

#endif