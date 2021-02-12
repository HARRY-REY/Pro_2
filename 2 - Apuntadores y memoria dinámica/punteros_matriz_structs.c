/*
 * El programa crea una matriz de punteros que a su vez
 * apuntan a dos estructuras diferentes.
 *
 *	|a|->|nombre|edad|promedio|
 * |w|->|b|->|ciudad|número de habitantes|
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ALUMNO
{
	char    nombre[30];
	int     edad;
	float   promedio;
}alumno;

typedef struct CIUDAD
{
	char   ciudad[30];
	int    habitantes;
}ciudad;

typedef struct CONJUNTO_PUNTEROS
{
	alumno *a;
	ciudad *b;
}conjunto;

int main()
{
	conjunto *w;                                 // Inica el puntero de tipo conjunto con otros apuntadores dentro

	w=(conjunto*)malloc(sizeof(conjunto));       // Se reserva memoria de tamaño suficiente para conjunto
	w->a=(alumno*)malloc(sizeof(alumno));        // Se reserva memorias para el puntero a hacia alumno
	strcpy(w->a->nombre,"El Pana Miguel");       // Ingresamos datos para la parte de nombre
	w->a->edad=20;                               // Ingresa edad
	w->a->promedio=9.5;                          // Ingresa promedio
	w->b=(ciudad*)malloc(sizeof(ciudad));        // Reserva memoria para b hacia ciudad
	strcpy(w->b->ciudad,"México");               // Ingresa nombre de la ciudad
	w->b->habitantes=10000;                      // Cantidad de habitantes

	printf("\nPuntero A\n");                     // Impresión de datos de A
	printf("\nNombre: %s"     , w->a->nombre);
	printf("\nEdad: %d"       , w->a->edad);
	printf("\nPromedio: %.2f" , w->a->promedio);

	printf("\n\n");

	printf("\nPuntero B\n");                     // Impresión de datos de B
	printf("\nCiudad: %s"     , w->b->ciudad);
	printf("\nHabitantes: %d" , w->b->habitantes);

	printf("\n\n");

	free(w->a);                                  // Liberación de memoria
	free(w->b);                                  // Liberación de memoria
	free(w);                                     // Liberación de memoria

	return 0;
}
