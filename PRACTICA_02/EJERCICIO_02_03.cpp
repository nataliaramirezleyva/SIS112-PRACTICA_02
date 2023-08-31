// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 3

// Problema planteado: Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
// rango de A - B y determine cuántos de estos elementos son números primos. 

#include <iostream>
#include <cstdlib>
#include <ctime>

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int tamanoArreglo = 50;
    int arreglo[tamanoArreglo];
    int A, B;

    std::cout << "Ingrese el valor de A: ";
    std::cin >> A;
    std::cout << "Ingrese el valor de B: ";
    std::cin >> B;

    // Inicializar el generador de números aleatorios
    std::srand(std::time(0));

    // Llenar el arreglo con números aleatorios en el rango [A, B]
    for (int i = 0; i < tamanoArreglo; ++i) {
        arreglo[i] = A + std::rand() % (B - A + 1);
    }

    // Contar la cantidad de números primos en el arreglo
    int cantidadPrimos = 0;
    for (int i = 0; i < tamanoArreglo; ++i) {
        if (esPrimo(arreglo[i])) {
            cantidadPrimos++;
        }
    }

    // Imprimir los resultados
    std::cout << "Arreglo generado:";
    for (int i = 0; i < tamanoArreglo; ++i) {
        std::cout << " " << arreglo[i];
    }
    std::cout << std::endl;

    std::cout << "Cantidad de números primos en el arreglo: " << cantidadPrimos << std::endl;

    return 0;
}
