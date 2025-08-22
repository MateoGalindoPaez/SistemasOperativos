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
int main(){

  // Declaramos dos punteros a char
  // no tienen espacio en memoria para guardar nada
  char *p;  
  char *q = NULL; 

  // Reservamos memoria dinámica para cada puntero
  // pide espacio en memoria (de 100 bytes)
  p = (char *) malloc(100 * sizeof(char));
  q = (char *) malloc(100 * sizeof(char));

  // Mostramos la dirección de memoria donde apunta p
  printf("Address of p = %s\n", p); 

  // Copiamos un texto dentro del espacio de memoria que apunta p
  strcpy(p, "Hello, Im the best in Operating Systems!!!"); 

  // Mostramos el contenido de p (el texto que copiamos)
  printf("%s\n", p);

  // Mostramos un mensaje informando que vamos a copiar otra cadena en q
  printf("About to copy \"Goodbye\" to q\n");

  // Copiamos el texto "Goodbye" en el espacio de memoria reservado de q
  strcpy(q, "Goodbye");

  // Confirmamos
  printf("String copied\n");

  // Mostramos el contenido de q (el texto que copiamos).
  printf("%s\n", q);

  // Liberamos el espacio de memoria que reservamos para p y q
  free(p);
  free(q);
  
  return 0; // Terminar programa
}
