#ifndef NODE_H
#define NODE_H

#include "Dato.h"

class Node {
    public:
        Node();
        Node(Dato* dato);
        ~Node();

        void setData(Dato* data);
        Dato* getData();

        void setSig(Node* siguiente);
        Node* getSig();


    private:
        Dato* data_;
        Node* sig; 
};


#endif