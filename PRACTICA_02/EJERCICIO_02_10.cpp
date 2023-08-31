// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 10

// Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
// contiene los nombres de estos departamentos, indique el nombre del departamento que tiene
// la mayor población y el nombre del departamento que tiene la menor población.

#include <iostream>
#include <string>
#include <limits> // Para usar el valor máximo y mínimo de los tipos de datos

int main() {
    const int numDepartamentos = 9;

    int poblacion[numDepartamentos];
    std::string departamentos[numDepartamentos] = {
        "La Paz", "Cochabamba", "Santa Cruz", "Potosí", "Oruro",
        "Chuquisaca", "Tarija", "Beni", "Pando"
    };

    // Ingresar la población por teclado
    for (int i = 0; i < numDepartamentos; ++i) {
        std::cout << "Ingrese la población de " << departamentos[i] << ": ";
        std::cin >> poblacion[i];
    }

    // Encontrar la población máxima y mínima y sus respectivos departamentos
    int maxPoblacion = std::numeric_limits<int>::min(); // Valor mínimo posible
    int minPoblacion = std::numeric_limits<int>::max(); // Valor máximo posible
    std::string nombreMaxPoblacion;
    std::string nombreMinPoblacion;

    for (int i = 0; i < numDepartamentos; ++i) {
        if (poblacion[i] > maxPoblacion) {
            maxPoblacion = poblacion[i];
            nombreMaxPoblacion = departamentos[i];
        }
        if (poblacion[i] < minPoblacion) {
            minPoblacion = poblacion[i];
            nombreMinPoblacion = departamentos[i];
        }
    }

    // Imprimir los resultados
    std::cout << "Departamento con mayor población: " << nombreMaxPoblacion << " (" << maxPoblacion << ")" << std::endl;
    std::cout << "Departamento con menor población: " << nombreMinPoblacion << " (" << minPoblacion << ")" << std::endl;

    return 0;
}
