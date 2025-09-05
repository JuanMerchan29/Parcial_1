#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura de alumno
typedef struct {
    unsigned int id : 25;       // ID compacto en 25 bits
    unsigned int edad : 7;      // Edad en 7 bits
    char *nombre;               // cadena dinámica para nombre
    char *apellido;             // cadena dinámica para apellido
    float *notas;               // arreglo dinámico de notas
    int totalMaterias;          // número de materias
} Alumno;

// Función para crear un alumno dinámicamente
Alumno *nuevo_alumno(const char *nombre, const char *apellido,
                     unsigned int edad, unsigned int id,
                     float *notasIniciales, int cantidad) {
    Alumno *al = (Alumno *) calloc(1, sizeof(Alumno));
    if (!al) return NULL;

    // Copiar cadenas
    al->nombre = (char *) malloc(strlen(nombre) + 1);
    strcpy(al->nombre, nombre);

    al->apellido = (char *) malloc(strlen(apellido) + 1);
    strcpy(al->apellido, apellido);

    al->edad = edad;
    al->id = id;

    // Asignar notas
    al->totalMaterias = cantidad;
    al->notas = (float *) calloc(cantidad, sizeof(float));
    for (int i = 0; i < cantidad; i++) {
        al->notas[i] = notasIniciales[i];
    }

    return al;
}

// Liberar memoria de un alumno
void borrar_alumno(Alumno *al) {
    if (!al) return;
    free(al->nombre);
    free(al->apellido);
    free(al->notas);
    free(al);
}

// Mostrar información de un alumno
void imprimir_alumno(const Alumno *al) {
    printf("----- Alumno -----\n");
    printf("ID: %u | Edad: %u\n", al->id, al->edad);
    printf("Nombre completo: %s %s\n", al->nombre, al->apellido);
    printf("Notas: ");
    for (int i = 0; i < al->totalMaterias; i++) {
        printf("%.2f ", al->notas[i]);
    }
    printf("\n------------------\n\n");
}

int main() {
    float notasA[] = {4.2, 3.9, 5.0};
    float notasB[] = {3.1, 3.7};

    Alumno *a1 = nuevo_alumno("Laura", "Martinez", 21, 11111, notasA, 3);
    Alumno *a2 = nuevo_alumno("Pedro", "Lopez", 23, 22222, notasB, 2);

    imprimir_alumno(a1);
    imprimir_alumno(a2);

    borrar_alumno(a1);
    borrar_alumno(a2);

    return 0;
}
