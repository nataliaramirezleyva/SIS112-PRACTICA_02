// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 5

// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
// 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // Para usar el valor máximo y mínimo de los tipos de datos

int main() {
    int N;

    std::cout << "Ingrese la cantidad de personas: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Cantidad inválida. El programa terminará." << std::endl;
        return 1;
    }

    int estaturas[N];

    // Inicializar el generador de números aleatorios
    std::srand(std::time(0));

    // Llenar el arreglo con estaturas aleatorias entre 50 y 240 cm
    for (int i = 0; i < N; ++i) {
        estaturas[i] = 50 + std::rand() % 191; // Rango de 191 (240 - 50 + 1)
    }

    // Inicializar variables para la mayor y menor estatura, así como la suma para el promedio
    int mayorEstatura = std::numeric_limits<int>::min(); // Valor mínimo posible
    int menorEstatura = std::numeric_limits<int>::max(); // Valor máximo posible
    int sumaEstaturas = 0;

    // Calcular la mayor estatura, la menor estatura y la suma de estaturas
    for (int i = 0; i < N; ++i) {
        if (estaturas[i] > mayorEstatura) {
            mayorEstatura = estaturas[i];
        }
        if (estaturas[i] < menorEstatura) {
            menorEstatura = estaturas[i];
        }
        sumaEstaturas += estaturas[i];
    }

    // Calcular el promedio de estaturas
    double promedioEstaturas = static_cast<double>(sumaEstaturas) / N;

    // Imprimir los resultados
    std::cout << "Estaturas registradas:";
    for (int i = 0; i < N; ++i) {
        std::cout << " " << estaturas[i];
    }
    std::cout << std::endl;

    std::cout << "Mayor estatura: " << mayorEstatura << " cm" << std::endl;
    std::cout << "Menor estatura: " << menorEstatura << " cm" << std::endl;
    std::cout << "Promedio de estaturas: " << promedioEstaturas << " cm" << std::endl;

    return 0;
}