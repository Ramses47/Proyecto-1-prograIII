#include "Interfaz.h"
#include <iostream>

void Interfaz::MostrarMenu() {
    std::cout << "1. Agregar al inicio" << std::endl;
    std::cout << "2. Agregar al final" << std::endl;
    std::cout << "3. Mostrar lista" << std::endl;
    std::cout << "4. Obtener valor por posición" << std::endl;
    std::cout << "5. Borrar un elemento por posicion" << std::endl; 
    std::cout << "6. Salir" << std::endl;
}

void Interfaz::Ejecutar() {
    int opcion, valor, posicion;

    do {
        MostrarMenu();
        std::cout << "Selecciona una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            std::cout << "Introduce el valor a agregar al inicio: ";
            std::cin >> valor;
            lista.Push(valor);
            break;
        case 2:
            std::cout << "Introduce el valor a agregar al final: ";
            std::cin >> valor;
            lista.Append(valor);
            break;
        case 3:
            std::cout << "Lista actual: ";
            lista.ReadList();
            break;
        case 4:
            std::cout << "Introduce la posicion: ";
            std::cin >> posicion;
            std::cout << "Valor en posicion " << posicion << ": " << lista.GetValue(posicion) << std::endl;
            break;
        case 5:
            std::cout << "Introduce la posición del elemento a borrar: "; 
            std::cin >> posicion;
            lista.Remove(posicion); 
            std::cout << "Elemento en posicion " << posicion << " borrado de la lista." << std::endl;
            break;
        case 6:
            std::cout << "Saliendo..." << std::endl;
            break;
        default:
            std::cout << "Opcion no válida. Intente de nuevo." << std::endl;
        }
    } while (opcion != 6);
}

void Interfaz::Mostrarprin() {
    std::cout << "Menu principal" << std::endl;
    std::cout << "1.- lista lineal ligada " << std::endl;
    std::cout << "2.- lista curcular ligada" << std::endl;
    std::cout << "3.- lista lineal dligada" << std::endl;
    std::cout << "4.- lista circular dligada" << std::endl;
    std::cout << "5.- Salir" << std::endl;
}

void Interfaz::Ejecutarprin() {
    int opcionn;
    do {
       
        Mostrarprin();
        std::cin >> opcionn;
        switch (opcionn)
        {
        case 1:
            std::cout << "lista lineal ligada" << std::endl;
            break;
        case 2:
            std::cout << "lista curcular ligada" << std::endl;
            break;
        case 3:
            std::cout << "lista lineal dligada" << std::endl;
            break;
        case 4:
            std::cout << "lista circular dligada" << std::endl;
            break;
        case 5:
            std::cout << "sair" << std::endl;
            break;
        default:
            std::cout << "opcion no valida" << std::endl;
        }
    }while (opcionn != 5);

}
