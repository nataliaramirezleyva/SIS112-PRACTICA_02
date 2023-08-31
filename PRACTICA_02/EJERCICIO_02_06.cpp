// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 6

// Problema planteado: Dados dos arreglos constantes de igual tamaño, generar un tercer arreglo con los elementos
// intercalados.

#include <iostream>

int main() {
    const int tamanoArreglos = 6; // Puedes ajustar el tamaño según tus necesidades

    int arreglo1[tamanoArreglos] = {1, 3, 5, 7, 9, 11};
    int arreglo2[tamanoArreglos] = {2, 4, 6, 8, 10, 12};
    int arregloInterpolado[tamanoArreglos * 2];

    for (int i = 0; i < tamanoArreglos; ++i) {
        arregloInterpolado[i * 2] = arreglo1[i];
        arregloInterpolado[i * 2 + 1] = arreglo2[i];
    }

    std::cout << "Primer arreglo:";
    for (int i = 0; i < tamanoArreglos; ++i) {
        std::cout << " " << arreglo1[i];
    }
    std::cout << std::endl;

    std::cout << "Segundo arreglo:";
    for (int i = 0; i < tamanoArreglos; ++i) {
        std::cout << " " << arreglo2[i];
    }
    std::cout << std::endl;

    std::cout << "Arreglo intercalado:";
    for (int i = 0; i < tamanoArreglos * 2; ++i) {
        std::cout << " " << arregloInterpolado[i];
    }
    std::cout << std::endl;

    return 0;
}