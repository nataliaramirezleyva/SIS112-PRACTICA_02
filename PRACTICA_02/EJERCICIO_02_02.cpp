// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 2

// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
// determine el porcentaje de números pares positivos e impares negativos.

#include <iostream>

int main() {
    // Arreglo constante de 10 elementos enteros
    const int arreglo[10] = {2, -3, 6, -8, 5, 0, -9, 12, 7, -4};

    // Contadores para números pares positivos e impares negativos
    int paresPositivos = 0;
    int imparesNegativos = 0;

    // Calcular la cantidad de números pares positivos e impares negativos
    for (int i = 0; i < 10; ++i) {
        if (arreglo[i] > 0 && arreglo[i] % 2 == 0) {
            paresPositivos++;
        } else if (arreglo[i] < 0 && arreglo[i] % 2 != 0) {
            imparesNegativos++;
        }
    }

    // Calcular el porcentaje de pares positivos e impares negativos
    double porcentajeParesPositivos = (static_cast<double>(paresPositivos) / 10) * 100;
    double porcentajeImparesNegativos = (static_cast<double>(imparesNegativos) / 10) * 100;

    // Imprimir los resultados
    std::cout << "Porcentaje de números pares positivos: " << porcentajeParesPositivos << "%" << std::endl;
    std::cout << "Porcentaje de números impares negativos: " << porcentajeImparesNegativos << "%" << std::endl;

    return 0;
}
