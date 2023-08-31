// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 4

// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
// el porcentaje de mayores (>=18 años) y menores de edad (<18 años).

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int tamanoArreglo = 50;
    int edades[tamanoArreglo];

    // Inicializar el generador de números aleatorios
    std::srand(std::time(0));

    // Llenar el arreglo con edades aleatorias entre 1 y 100
    for (int i = 0; i < tamanoArreglo; ++i) {
        edades[i] = 1 + std::rand() % 100;
    }

    // Contadores para personas mayores y menores de edad
    int mayores = 0;
    int menores = 0;

    // Calcular la cantidad de personas mayores y menores de edad
    for (int i = 0; i < tamanoArreglo; ++i) {
        std::cout << "Persona " << i + 1 << " - Edad: " << edades[i] << std::endl;

        if (edades[i] >= 18) {
            mayores++;
        } else {
            menores++;
        }
    }

    // Calcular los porcentajes
    double porcentajeMayores = (static_cast<double>(mayores) / tamanoArreglo) * 100;
    double porcentajeMenores = (static_cast<double>(menores) / tamanoArreglo) * 100;

    // Imprimir los resultados
    std::cout << "\nPorcentaje de personas mayores de edad: " << porcentajeMayores << "%" << std::endl;
    std::cout << "Porcentaje de personas menores de edad: " << porcentajeMenores << "%" << std::endl;

    return 0;
}