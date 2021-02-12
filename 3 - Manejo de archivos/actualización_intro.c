/*
 *
 * Este programa actualiza la informacíón del .txt agregando 
 * otras líneas de texto.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *archivo;
	char dir_arch[]="/home/king/PROGRAMACION/C/PROGRAMACIÓN 2/3 - Manejo de archivos/data/intro.txt";
	
	archivo=fopen(dir_arch,"a"); // De este modo se agrega información sin sobreescribir
	
	if(archivo==NULL)
	{
		printf("\nERROR AL LEER ARCHIVO\n\n");
		exit(1);
	}

	fprintf(archivo,"\nEsta una nueva líena");
	fprintf(archivo,"\nEsta es otra líena");

	printf("\nEstatus: El archivo ha sido modificado\n");
	
	fclose(archivo);

	return 0;
}
