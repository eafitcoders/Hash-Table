#ifdef _WIN32  // para los carácteres especiales en windows
#include <windows.h>

#include "HashTable.h"

void menu() {
  HashTable *tabla = new HashTable(); // Crea una instancia de HashTable
  int opcion;
  string clave;
  while (true) { // Bucle infinito para mantener el menú activo
    // Imprime el menú de opciones
    cout << "\n----MENU----" << endl;
    cout << "1. Insertar" << endl;
    cout << "2. Eliminar" << endl;
    cout << "3. Buscar" << endl;
    cout << "4. Listar" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion; // Lee la opción ingresada por el usuario
    cout << endl;
    switch (opcion) {
      case 1: {
        // Opción para insertar un valor y su clave en la tabla hash
        char valor;
        cout << "Ingrese la clave: ";
        cin >> clave;
        cout << "Ingrese el valor: ";
        cin >> valor;
        tabla->insertar(clave, valor); // Inserta la clave y el valor en la tabla hash
        break;
      }
      case 2: {
        // Opción para eliminar un Dato de la tabla hash
        cout << "Ingrese la clave del valor a eliminar: ";
        cin >> clave;
        tabla->eliminar(clave); // Elimina el Dato de la tabla hash
        break;
      }
      case 3: {
        // Opción para buscar un Dato en la tabla hash
        cout << "Ingrese la clave del valor a buscar: ";
        cin >> clave;
        tabla->buscar(clave); // Busca el Dato en la tabla hash
        break;
      }
      case 4: {
        // Opción para listar todos los Datos en la tabla hash
        tabla->imprimir(); // Imprime todos los Datos en la tabla hash
        break;
      }
      case 5: {
        // Opción para salir del programa
        cout << "Hasta luego." << endl;
        delete tabla; // Libera la memoria asignada dinámicamente a la tabla hash
        return;
      }
      default: {
        // Manejo de opción inválida
        cout << "Opcion invalida. Intente de nuevo" << endl;
        break;
      }
    }
  }
}

int main() {
  SetConsoleOutputCP(CP_UTF8); // para los carácteres
  cout << "Bienvenido a la Hash Table" << endl;
  menu(); // Llama a la función menu para iniciar el menú interactivo
  return 0;
}

#endif