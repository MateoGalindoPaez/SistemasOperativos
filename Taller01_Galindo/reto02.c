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
  char*q= NULL; //  Declaramos un puntero a char
  printf("Requesting soace for \"Goodbye\"\n"); //mensaje informando que se va a reservar espacio para "Goodbye"
  q = (char *) malloc(strlen("Goodbye")+1); // Reservamos memoria dinámica para el puntero q, para guardar "Goodbye"

  // Verificamos si la reserva de memoria fue exitosa
  if(!q){
    perror("failded to allocate memory");
    exit(1);
  }
  // Mostramos la dirección de memoria donde apunta q
  printf("About to copy \"Goodbye\" to q at address %s\n",q);
  strcpy(q,"Goodbye"); // Copiamos el texto "Goodbye" en el espacio de memoria reservado para q
  printf("String copied\n");
  printf("%s\n",q); // Mostramos el contenido de q (el texto que copiamos)
  
  free(q); // Liberamos el espacio de memoria que reservamos para q
  return 0; // Terminar programa
}