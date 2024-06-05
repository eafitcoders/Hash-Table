#include "Dato.h"
//Constructor
Dato::Dato(string Clave, char Valor){
    clave = Clave;
    valor = Valor;
}

//Método para obtener el objeto en cadena de texto 
string Dato::to_string(){
    string frase = "(Clave: \"" + clave + "\" | Valor: '" + valor + "')";
    return frase;
}