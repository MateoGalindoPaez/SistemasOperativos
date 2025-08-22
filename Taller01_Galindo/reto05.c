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

int main (){
  int *ptr, i,n1,n2; // Decla un puntero a int (entero)
  printf("Enter size: ");
  scanf("%d",&n1); // metemos tamaño del arreglo
  ptr = (int*) malloc(n1* sizeof(int)); // Reservamos memoria dinámica para el puntero ptr, para guardar n1 enteros
  printf("Adresses of previosly allocated memory: ");
  for(i=0;i<n1;++i) // direcciones de memoria donde apunta ptr
    printf("n\np = %p\n", ptr+i); 
  printf("Enter new size: "); // metemos el nuevo tamaño del arreglo
  scanf("%d",&n2); // Guardamos el nuevo tamaño en n2
  //rellocating the memory
  ptr = realloc(ptr, n2 * sizeof(int)); //Cambiamos el espacio de memoria reservado para ptr, para guardar n2 enteros
  for(i=0;i<n2;++i) // Mostramos las direcciones de memoria donde apunta ptr
    printf("n\np = %p\n", ptr+i);

  free(ptr); // Liberamos el espacio de memoria que reservamos para ptr
}