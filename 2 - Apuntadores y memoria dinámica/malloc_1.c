#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char cadena[20], *puntero;
	int longitud;

	puts  ( "\n\tIngrese texto ");
	fgets ( cadena,20,stdin);
	
	longitud = strlen(cadena);                            // Se mide la longitud de la cadena recibida
	puntero  = (char *)malloc((longitud+1)*sizeof(char)); // Se reserva espacio en el puntero

	strcpy ( puntero,cadena);                             // Se copia la cadena al puntero
	printf ( "\nPuntero > %s\n" , puntero);
	free   ( puntero);
	return 0;
}
