// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 7

// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
// Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
// “Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
// tenga el mismo valor para todos los elementos.

#include <iostream>
#include <string>

int main() {
    const int tamanoVectores = 7;

    std::string vector1[tamanoVectores] = {"Juan", "María", "Luis", "Ana", "Pedro", "Laura", "Carlos"};
    std::string vector2[tamanoVectores] = {"Juan", "María", "Toro", "Ana", "Pedro", "Laura", "Carlos"};

    bool sonIguales = true;

    for (int i = 0; i < tamanoVectores; ++i) {
        if (vector1[i] != vector2[i]) {
            sonIguales = false;
            break;
        }
    }

    if (sonIguales) {
        std::cout << "Los vectores son iguales." << std::endl;
    } else {
        std::cout << "Los vectores son diferentes." << std::endl;
    }

    return 0;
}