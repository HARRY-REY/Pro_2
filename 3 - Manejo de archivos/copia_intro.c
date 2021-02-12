/*
 *
 * El programa lee el archivo .txt creado por el programa 
 * de introducción y copia toda la información en otro fichero. 
 *
 */

#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *archivo, *copia;
	char direccion_arch[]="/home/king/PROGRAMACION/C/PROGRAMACIÓN 2/3 - Manejo de archivos/data/intro.txt";
	char direccion_copia[]="/home/king/PROGRAMACION/C/PROGRAMACIÓN 2/3 - Manejo de archivos/data/copia.txt";
	int c;
	
	archivo=fopen(direccion_arch,"r");                  // Abre el archivo para lectura
	copia=fopen(direccion_copia,"w");                   // Abre el archivo para escritura

	if ( archivo == NULL )                              // Verificación del archivo
	{
		printf("\nERROR AL LEER ARCHIVO\n");
		exit(1);
	}

	while( ( c=fgetc(archivo) ) !=EOF )                 // Mientras no sea el fin del archivo, c toma el valor del caracter
	{
		fputc(c,copia);                             // Copia caracter a caracter en el archivo copia
	}

	printf("\nEl archivo se ha copia correctamente\n");

	fclose(archivo);
	fclose(copia);
	return 0;
}
