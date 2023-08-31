// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 8

// Problema planteado: Se tiene el arreglo
// Ventas:
//   0       1      2       10      11
// vene    vfeb   vmar . . vnov    vdic
// Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
// contiene los nombres de los meses:
// Meses:
//   0     1     2         10   11
// “Ene” “Feb” “Mar” . . “Nov” “Dic”
// Escriba un programa que obtenga:
// • ¿En qué mes(es) se dieron las ventas máximas de la empresa?
// • ¿A cuánto ascendieron las ventas máximas?
// • ¿Cuál fue el total de las ventas?
// Las ventas deben ser ingresadas por teclado.

#include <iostream>
#include <string>

int main() {
    const int tamanoArreglos = 12;

    int ventas[tamanoArreglos];
    std::string meses[tamanoArreglos] = {"Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic"};

    // Ingresar las ventas mensuales por teclado
    for (int i = 0; i < tamanoArreglos; ++i) {
        std::cout << "Ingrese las ventas para " << meses[i] << ": ";
        std::cin >> ventas[i];
    }

    // Encontrar las ventas máximas y sus meses correspondientes
    int maxVentas = ventas[0];
    std::string mesesMaxVentas = meses[0] + " ";
    int totalVentas = ventas[0];

    for (int i = 1; i < tamanoArreglos; ++i) {
        if (ventas[i] > maxVentas) {
            maxVentas = ventas[i];
            mesesMaxVentas = meses[i] + " ";
        } else if (ventas[i] == maxVentas) {
            mesesMaxVentas += meses[i] + " ";
        }

        totalVentas += ventas[i];
    }

    // Imprimir los resultados
    std::cout << "Mes(es) con ventas máximas: " << mesesMaxVentas << std::endl;
    std::cout << "Ventas máximas: " << maxVentas << std::endl;
    std::cout << "Total de ventas: " << totalVentas << std::endl;

    return 0;
}
