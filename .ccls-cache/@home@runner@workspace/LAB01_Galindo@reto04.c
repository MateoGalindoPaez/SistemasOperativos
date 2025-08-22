/**********
 * Fecha: Agosto 21 2025
 * Autor: Mateo Galindo Paez
 * Materia: Sistemas Operativos
 * Tema: Memoria Dinámica
 * Profesor: John Corredor
***********/

#include <stdio.h>
#include <stdlib.h>   
#include <string.h>

int main() {
    int n, i, *ptr, sum = 0;

    // Pedir cantidad de elementos
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Reservar memoria con calloc (inicializa en 0)
    ptr = (int*) calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory not allocated.\n");
        exit(1); // salimos con código de error
    }

    // Pedir los elementos del arreglo
    for (i = 0; i < n; ++i) {
        printf("Enter elements of array: ");
        scanf("%d", ptr + i);  // ptr + i es la dirección del i-ésimo elemento
        sum += *(ptr + i);     // *(ptr + i) accede al valor
    }

    // Imprimir la suma
    printf("Sum = %d\n", sum);

    // Liberar la memoria reservada
    free(ptr);

    return 0; // fin exitoso
}
