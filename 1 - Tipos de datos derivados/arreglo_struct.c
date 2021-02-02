#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 3

typedef struct CALIFICACIONES 
{
	char nombre[20];
	int calificacion;
}cali;

cali lista [ MAX_SIZE ];


int main()
{
	for ( int i=0 ; i < MAX_SIZE ; i++ )
	{
		printf("\nIngrese el nombre del alumno [%d] > " , i);
		fgets(lista[i].nombre , 50 , stdin); // Con esto leemos hasta 50 caracteres o hasta que se precione Intro
		printf("Ingrese la calificación de > ");
		scanf("%d" , &lista[i].calificacion); // Después de poner esto se genera un problema al leer el siguiente printf
		getchar(); // Esto es una solución
	}

	printf("\n");
	printf("\n\tDatos");
	printf("\n");
	
	for ( int i=0 ; i < MAX_SIZE ; i++ )
	{
		printf("\n");
		printf("Nombre: %s" , lista[i].nombre);
		printf("Calificacion: %d" , lista[i].calificacion);
	}
	printf("\n");
}
