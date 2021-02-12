/*
 *
 * El programa lee el archivo .txt creado por el programa 
 * de introducción.
 *
 */

#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *archivo;
	int c;
	char direccion_arch[]="/home/king/PROGRAMACION/C/PROGRAMACIÓN 2/3 - Manejo de archivos/data/intro.txt";
	
	archivo=fopen(direccion_arch,"r");

	printf("\n\n");

	if ( archivo == NULL )                       // Verificación del archivo
	{
		printf("\nERROR AL LEER ARCHIVO\n");
		exit(1);
	}

	while(1)                                     // Mientras sea verdad
	{
		c = fgetc ( archivo );               // Imprime letra por letra
		if ( feof ( archivo ) )              // Hasta el fin del archivo
		{
			break;                       // Rompe la iteración
		}
		printf("%c",c);                      // Imprime los caracteres
	}

	printf("\n\n");

	fclose(archivo);
	return 0;
}
