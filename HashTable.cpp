#include "HashTable.h"

// Constructor de la clase HashTable instanciando cada lista enlazada
HashTable::HashTable() {
  for (int i = 0; i < 10; i++) {
    hash[i] = new Lista();
  }
}

int HashTable::hashFunction(string clave) {
  char c = tolower(clave[0]); //Se toma el primer caracter, y se trata todos como minusculas
  int orden = c - 97; //Se resta 97 y se usa modulo para obtener el indice
  int index = orden % 10;
  if (index < 0 || index > 9) { //En caso de ser caracteres especiales o números se asigna a la posicion 9
    index = 9;
  }
  return index;
}
// Función para insertar un nodo en la lista enlazada correspondiente al índice
void HashTable::insertar(string clave, char valor) {
  int index = hashFunction(clave);
  hash[index]->agregarCola(new Node(new Dato(clave, valor))); //Se inserta en la lista enlazada
  cout << "\nSe agrego la clave " << clave << " con el valor " << valor << endl;
}
// Función para eliminar un nodo de la lista enlazada correspondiente al índice
void HashTable::eliminar(string clave) {
  int index = hashFunction(clave);
  hash[index]->retirarValor(clave);
}
// Función para buscar un nodo en la lista enlazada correspondiente al índice
Dato *HashTable::buscar(string clave) {
  int index = hashFunction(clave);
  return hash[index]->buscarClave(clave, index);
}
// Función para imprimir todos los datos de la hashTable
void HashTable::imprimir() {
  for (int i = 0; i < 10; i++) { //recorre cada indice y lo muestra
    cout << "Hash[" << i << "]: " << endl;
    hash[i]->listar();
  }
}
