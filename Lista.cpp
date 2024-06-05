#include "Lista.h"
// Constructor de la clase Lista
Lista::Lista(){
    cab = nullptr;
}

void Lista::listar(){
    Node* actual;
    actual = cab;
    int i = 1;
    if (cab == nullptr) 
        cout << "    Lista vacia\n";
    //Se itera sobre la lista imprimiendo los elementos
    while(actual != nullptr){
        Dato* item = actual->getData();
        std::cout <<"    ("<< std::to_string(i) <<"): "
                  << item->to_string() << std::endl;
        i = i+1;
        actual = actual->getSig();
    }
}

Node* Lista::buscarCola(){
    Node* actual = cab;
    //recorrido hasta el final
    //el final node.sig es null
    while (actual->getSig() != nullptr){
        actual=actual->getSig();
    }
    return actual;
}

void Lista::agregarCola(Node* Data){
    if (cab == nullptr){  //La lista es vacia
        cab = Data;
    } else {
        Node* cola = buscarCola();
        cola->setSig(Data); //sig de la cola el nuevo Nodo
    }
}

// elimina el valor correspondiente a la clave
void Lista:: retirarValor(string clave){
    Node* actual;
    actual = cab;
    //Se valida que la lista no este vacia
    if(cab == nullptr){
        std::cout << "\nNo se encontro el valor" << std::endl;
        return;
    //Se valida si el primer elemento es el que se busca
    } else if (cab->getData()->clave == clave){
        cab = cab->getSig();
        cout << "\nSe elimino la palabra " << clave << endl;
        return;
    }
    //Se itera hasta llegar al final o a la coincidencia
    while(actual->getSig() != nullptr && actual->getSig()->getData()->clave != clave){
        actual = actual->getSig();
    }
    //Se elimina el enlace con el apuntador previo a la coincidencia 
    if (actual->getSig() != nullptr){
        actual->setSig(actual->getSig()->getSig());
        cout << "\nSe elimino la palabra " << clave << endl;
    }else{ // Si llega al ultimo de la lista es porque no se encontró
        std::cout << "\nNo se encontro el valor" << std::endl;
    }
}
// busca el valor correspondiente a la clave
Dato* Lista::buscarClave(string clave, int ubicacion){
    Node* actual;
    actual = cab;
    int i = 1;
    while(actual != nullptr && actual->getData()->clave != clave){ // recorre hasta encontrar la clave o nullptr
        actual = actual->getSig();
        i++;
    }
    if(actual == nullptr){ // si es nullptr no se encontro
        std::cout << "\nLa palabra " << clave << " no se encuentra en la Hash Table" << std::endl;
        return nullptr;
    }else{ // si se encontro
        std::cout<<"\nLa palabra " << clave << " se encuentra en Hash[" << ubicacion << "] Posición[" << i << "]"<< std::endl;
        return actual->getData(); // retorna el dato
    }
}