/*
 *
 * En este programa se da una explicación a la creación de archivos,
 * apertura y cierre.
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	// 1. Definir un puntero de tipo FILE
	// 2. Abrir el archivo a través de un puntero y crear una corriente
	// 3. Manipular el archivo (leer, escribir...)
	// 4. Cerrar el archivo
	
	FILE *archivo;                                                                                        // 1

	archivo=fopen("/home/king/PROGRAMACION/C/PROGRAMACIÓN 2/3 - Manejo de archivos/data/intro.txt", "w"); // 2
                                                                                                              // Verificación de la correcta apertura del archivo
	if ( archivo == NULL )
	{
		printf("\nERROR AL CREAR ARCHIVO\n");
		exit(1);
	}

	fprintf(archivo,"%s","Hola mundo");                                                                   // 3

	fclose(archivo);                                                                                      // 4

	return 0;
}
