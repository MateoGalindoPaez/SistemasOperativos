/**********
 * Fecha:Agosto 21 2025
 * Autor: Mateo Galindo Paez
 * Materia: Sistemas Operativos
 * Tema: Memoria Dinamica
 * Profesor: John Corredor
***********/

#include <stdio.h>
#include <stdlib.h>   
#include <string.h> 

int main (){
  int*ptr; // Declaramos un puntero a int
  ptr = malloc(15 * sizeof(*ptr)); /* a block of 15 integers */

  if(ptr != NULL){ // Verificamos si la reserva de memoria fue exitosa
    *(ptr + 5) = 480; /* assign 480 to sixth integer */
      printf("ptr[5] = %d\n", *(ptr + 5)); // Mostramos el contenido de la sexta posición del arreglo
  }
  free(ptr); // Liberamos el espacio de memoria que reservamos para ptr
  return 0; // Terminar programa
}