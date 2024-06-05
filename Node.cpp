#include "Node.h"

// Constructor por defecto
Node::Node(){
    sig = nullptr;
}

// Constructor con parámetro
Node::Node(Dato* data){
    data_ = data;
    sig = nullptr;
}

// Destructor
Node::~Node(){
    std::cout << "El objeto se destruira" << std::endl;
}

// Establece el dato del nodo
void Node::setData(Dato* data){
    data_ = data;
}

// Obtiene el dato del nodo
Dato* Node::getData(){
    return data_;
}

// Establece el nodo siguiente
void Node::setSig(Node* siguiente){
    sig = siguiente;
}

// Obtiene el nodo siguiente
Node* Node::getSig(){
    return sig;
}