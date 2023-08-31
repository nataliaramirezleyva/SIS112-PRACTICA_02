// Materia: Programación I, Paralelo 1

// Autor: Natalia Nicole Ramirez Leyva 

// Fecha creación: 31/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 13

// Problema planteado:Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga 
// los números capicúa contenidos en el primero. 

#include <iostream>
#include <vector>

bool esCapicua(int num) {
    int original = num;
    int invertido = 0;
    
    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    
    return original == invertido;
}

int main() {
    int N, M;

    std::cout << "Ingrese el valor de N: ";
    std::cin >> N;

    std::cout << "Ingrese el valor de M: ";
    std::cin >> M;

    if (N > M) {
        std::cout << "N debe ser menor o igual a M." << std::endl;
        return 1;
    }

    std::vector<int> numeros;
    
    for (int i = N; i <= M; ++i) {
        numeros.push_back(i);
    }

    std::vector<int> capicuas;

    for (int num : numeros) {
        if (esCapicua(num)) {
            capicuas.push_back(num);
        }
    }

    std::cout << "Números capicúas entre " << N << " y " << M << ":";
    for (int capicua : capicuas) {
        std::cout << " " << capicua;
    }
    std::cout << std::endl;

    return 0;
}
