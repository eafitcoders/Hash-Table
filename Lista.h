#ifndef LISTA_H
#define LISTA_H

#include "Node.h"

class Lista {
    public:
        Node* cab;
        Lista();

        void listar();
        void agregarCola(Node* Data);
        void retirarValor(string valor);
        Dato* buscarClave(string clave, int ubicacion);

    private:
        Node* buscarCola();

};

#endif