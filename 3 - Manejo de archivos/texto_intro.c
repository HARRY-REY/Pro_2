/*
 *
 * El programa lee el archivo .txt creado por el programa 
 * de introducción y se ingresa texto dado por el usuario.
 *
 */

#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *archivo;
	char direccion_arch[]="/home/king/PROGRAMACION/C/PROGRAMACIÓN 2/3 - Manejo de archivos/data/intro.txt";
	int c,contador;
	char texto[100];
	
	archivo=fopen(direccion_arch,"a+"); // Abre el archivo para lectura y escritura

	printf("\n\n");

	if ( archivo == NULL )                       // Verificación del archivo
	{
		printf("\nERROR AL LEER ARCHIVO\n");
		exit(1);
	}

	printf("\nIngrese el  nuevo texto > ");
	fgets(texto,100,stdin);
	fprintf(archivo,"%s","\n");
	fprintf(archivo,"%s",texto);
	printf("\nSe ha guardado la información\n");
	printf("\n\n");

	fclose(archivo);
	return 0;
}
