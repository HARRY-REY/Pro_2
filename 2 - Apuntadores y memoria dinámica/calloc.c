/*
 * El programa lee una línea de caracteres, reserva memoria con 
 * calloc() para el buffer de tantos caracteres como los leídos y
 * se copia en el buffeer la cadena
 *
 */
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main()
{
	char *p, caracteres[100];                         // Declaran variables

	puts("\nIngrese caracteres\n");
	fgets(caracteres,100,stdin);                      // Guarda datos
	p=(char*)calloc(strlen(caracteres),sizeof(char)); // Reserva memoria para el número de carácteres
	strcpy(p,caracteres);                             // La cadena original se copia al puntero
	printf("\nPuntero -> %s\n" , p);                  // Imprime puntero
	free(p);                                          // Liberación de memoria
	return 0;
}

