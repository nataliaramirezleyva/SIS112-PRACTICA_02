// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 1

// Problema planteado:Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de
// los componentes de índice par y la resta de los componentes de índice impar.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Definir los parámetros N, A y B
    int N, A, B;
    std::cout << "Ingrese el tamaño del vector (N): ";
    std::cin >> N;
    std::cout << "Ingrese el valor de A: ";
    std::cin >> A;
    std::cout << "Ingrese el valor de B: ";
    std::cin >> B;

    // se inicializara el generador de números aleatorios
    std::srand(std::time(0));

    // Se creara el vector de tamaño N y llenarlo con números aleatorios entre A y B
    int vector[N];
    for (int i = 0; i < N; ++i) {
        vector[i] = A + std::rand() % (B - A + 1);
    }

    // Se calculara la suma de componentes de índice par y la resta de componentes de índice impar
    int sumaPares = 0;
    int restaImpares = 0;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            sumaPares += vector[i];
        } else {
            restaImpares -= vector[i];
        }
    }

    // Se imprimiran los resultados
    std::cout << "Vector generado:";
    for (int i = 0; i < N; ++i) {
        std::cout << " " << vector[i];
    }
    std::cout << std::endl;

    std::cout << "Suma de componentes de índice par: " << sumaPares << std::endl;
    std::cout << "Resta de componentes de índice impar: " << restaImpares << std::endl;

    return 0;
}
