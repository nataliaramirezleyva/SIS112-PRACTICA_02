// Materia: Programación I, Paralelo 1

// Autor: Natalia Nicole Ramirez Leyva 

// Fecha creación: 31/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 11

// Problema planteado:Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de 

// este arreglo determine la desviación típica.

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> edades;

    std::cout << "Ingrese las edades de las personas (-1 para terminar):" << std::endl;

    int edad;
    while (true) {
        std::cin >> edad;
        if (edad == -1) {
            break;
        }
        edades.push_back(edad);
    }

    if (edades.size() <= 1) {
        std::cout << "No hay suficientes edades para calcular la desviación típica." << std::endl;
        return 1;
    }

    // Calcular la media (promedio)
    double suma = 0;
    for (int i = 0; i < edades.size(); ++i) {
        suma += edades[i];
    }
    double media = suma / edades.size();

    // Calcular la suma de los cuadrados de las diferencias
    double sumaCuadradosDiferencias = 0;
    for (int i = 0; i < edades.size(); ++i) {
        double diferencia = edades[i] - media;
        sumaCuadradosDiferencias += diferencia * diferencia;
    }

    // Calcular la varianza y la desviación típica
    double varianza = sumaCuadradosDiferencias / (edades.size() - 1);
    double desviacionTipica = std::sqrt(varianza);

    std::cout << "Desviación típica: " << desviacionTipica << std::endl;

    return 0;
}