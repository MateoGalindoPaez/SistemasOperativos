#include <stdio.h>
#include <stdlib.h>  
#include <string.h>  

int main(){

  char *p;  // Declaración de un puntero a char (cadena)
  char *q = NULL; // Otro puntero a char sin memoria asignada

  p = (char *) malloc(100*sizeof(char));
  q = (char *) malloc(100*sizeof(char));
  
  // Debería usarse %p para direcciones, y solo después de inicializarlo.
  printf("Address of p = %s\n", p); 

  // Aquí p no apunta a nada reservado → esto provoca *segmentation fault*.
  strcpy(p, "Hello, Im the best in Operating Systems!!!"); 

  // Se intenta imprimir la cadena copiada a p (si hubiera memoria reservada).
  printf("%s\n", p);

  // Mensaje de control para mostrar que se copiará otra cadena en q
  printf("About to copu \"Goodbye\" to q\n");


  // strcpy aquí también corrompe memoria → falla en ejecución.
  strcpy(q, "Goodbye");

  // Mensaje de confirmación
  printf("String copied\n");

  // Imprime la cadena supuestamente copiada en q
  printf("%s\n",q);

  return 0; // Fin del programa
}
