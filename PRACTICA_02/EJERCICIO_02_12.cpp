// Materia: Programación I, Paralelo 1

// Autor: Natalia Nicole Ramirez Leyva 

// Fecha creación: 31/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 12

// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro 

// contiene los nombres de estos minerales, para obtener:

// - Buscar por nombre de mineral y desplegar la producción
// - Ordenar del mayor al menor (producción) y mostrar:
// Mineral Produccion ™
// SN 998.000
// SB 876.500
// AU 786.670
// PT 636.143
// AG 135.567
// CU 109.412

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Para la función sort

struct Mineral {
    std::string nombre;
    double produccion;
};

bool compararProduccion(const Mineral &mineral1, const Mineral &mineral2) {
    return mineral1.produccion > mineral2.produccion;
}

int main() {
    const int numMinerales = 6;

    std::string nombresMinerales[numMinerales] = {"SN", "SB", "AU", "PT", "AG", "CU"};
    double produccionMinerales[numMinerales] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    std::vector<Mineral> minerales;

    for (int i = 0; i < numMinerales; ++i) {
        Mineral mineral;
        mineral.nombre = nombresMinerales[i];
        mineral.produccion = produccionMinerales[i];
        minerales.push_back(mineral);
    }

    std::string buscarMineral;
    std::cout << "Ingrese el nombre del mineral a buscar: ";
    std::cin >> buscarMineral;

    // Buscar por nombre de mineral y desplegar la producción
    bool encontrado = false;
    for (int i = 0; i < minerales.size(); ++i) {
        if (minerales[i].nombre == buscarMineral) {
            std::cout << "Producción de " << buscarMineral << ": " << minerales[i].produccion << " TM" << std::endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        std::cout << "Mineral no encontrado." << std::endl;
    }

    // Ordenar del mayor al menor (producción) y mostrar
    std::sort(minerales.begin(), minerales.end(), compararProduccion);

    std::cout << "Mineral  Produccion (TM)" << std::endl;
    for (const Mineral &mineral : minerales) {
        std::cout << mineral.nombre << "       " << mineral.produccion << std::endl;
    }

    return 0;
}