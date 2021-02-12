/*
 * Respuesta de examen
 *
 *
 * 	|r1|->|MAC|10|
 * |x|->|r2|->|10.0|15|A|->|9.6|17|B|->NULL
 * 	|r3|->|10|MÉXICO|	
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct CARRERA
{
	char   carrera[10];
	int    personas;
}carrera;

typedef struct DATOS
{
	float    decimal;
	int      entero;
	char     letra[1];
	struct   DATOS *siguiente;
}datos;

typedef struct PAIS
{	
	int    viajes;
	char   pais[10];
}pais;

typedef struct PUNTEROS
{
	carrera   *r1;
	datos     *r2;
	pais      *r3;
}punteros;

int main()
{
	punteros *x;
	
	x=(punteros*)malloc(sizeof(punteros));

	x->r1=(carrera*)malloc(sizeof(carrera));
	strcpy(x->r1->carrera,"MAC");
	x->r1->personas=10;

	x->r2=(datos*)malloc(sizeof(datos));
	x->r2->decimal=10.0;
	x->r2->entero=15;
	strcpy(x->r2->letra,"A");

	x->r2->siguiente=(datos*)malloc(sizeof(datos));
	x->r2->siguiente->decimal=9.6;
	x->r2->siguiente->entero=17;
	strcpy(x->r2->siguiente->letra,"B");
	x->r2->siguiente->siguiente=NULL;

	x->r3=(pais*)malloc(sizeof(pais));
	x->r3->viajes=10;
	strcpy(x->r3->pais,"MÉXICO");

	printf("\nR1 -> |%s|%d|", x->r1->carrera, x->r1->personas);
	printf("\nR2 -> |%.2f|%d|%s| -> |%.2f|%d|%s| -> NULL ", x->r2->decimal, x->r2->entero, x->r2->letra, x->r2->siguiente->decimal, x->r2->siguiente->entero,x->r2->siguiente->letra);
	printf("\nR3 -> |%d|%s|", x->r3->viajes, x->r3->pais);

	printf("\n\n");

	free(x->r1);
	free(x->r2->siguiente);
	free(x->r2);
	free(x->r3);
	free(x);
	
	return 0;
}
