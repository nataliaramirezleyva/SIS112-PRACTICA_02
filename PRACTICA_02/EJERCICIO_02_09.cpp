// Materia: Programación I, Paralelo 4

// Autor: Natalia Nicole Ramirez Leyva

// Fecha creación: 30/08/2023

// Fecha modificación: 30/08/2023

// Número de ejericio: 9

// Problema planteado: Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
// arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
// Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y el
// nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
// desempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string>
#include <limits> // Para usar el valor máximo y mínimo de los tipos de datos

int main() {
    const int tamanoArreglos = 5; // Puedes ajustar el tamaño según tus necesidades

    double calificaciones[tamanoArreglos];
    std::string nombres[tamanoArreglos] = {"Juan", "Maria", "Luis", "Ana", "Pedro"};
    std::string carreras[tamanoArreglos] = {"INF", "ECO", "ADM", "ECO", "ADM"};

    // Ingresar las calificaciones por teclado
    for (int i = 0; i < tamanoArreglos; ++i) {
        std::cout << "Ingrese la calificación de " << nombres[i] << ": ";
        std::cin >> calificaciones[i];
    }

    // Encontrar la calificación máxima y mínima y sus respectivos nombres
    double maxCalificacion = std::numeric_limits<double>::min(); // Valor mínimo posible
    double minCalificacion = std::numeric_limits<double>::max(); // Valor máximo posible
    std::string nombreMaxCalificacion;
    std::string nombreMinCalificacion;

    for (int i = 0; i < tamanoArreglos; ++i) {
        if (calificaciones[i] > maxCalificacion) {
            maxCalificacion = calificaciones[i];
            nombreMaxCalificacion = nombres[i];
        }
        if (calificaciones[i] < minCalificacion) {
            minCalificacion = calificaciones[i];
            nombreMinCalificacion = nombres[i];
        }
    }

    // Calcular el promedio de calificaciones del curso
    double sumaCalificaciones = 0;
    for (int i = 0; i < tamanoArreglos; ++i) {
        sumaCalificaciones += calificaciones[i];
    }
    double promedioCurso = sumaCalificaciones / tamanoArreglos;

    // Encontrar la carrera con desempeño mayor al promedio del curso
    std::string carreraMayorDesempeno;
    double maxDesempeno = std::numeric_limits<double>::min(); // Valor mínimo posible

    for (int i = 0; i < tamanoArreglos; ++i) {
        if (calificaciones[i] > promedioCurso && calificaciones[i] > maxDesempeno) {
            maxDesempeno = calificaciones[i];
            carreraMayorDesempeno = carreras[i];
        }
    }

    // Imprimir los resultados
    std::cout << "Alumno con mayor calificación: " << nombreMaxCalificacion << " (" << maxCalificacion << ")" << std::endl;
    std::cout << "Alumno con menor calificación: " << nombreMinCalificacion << " (" << minCalificacion << ")" << std::endl;
    std::cout << "Carrera con desempeño mayor al promedio del curso: " << carreraMayorDesempeno << std::endl;

    return 0;
}
