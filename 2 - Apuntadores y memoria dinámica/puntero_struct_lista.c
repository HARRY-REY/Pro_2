/*
 * El programa crea una lista con un tipo de dato char para un nombre
 * |*|->|Ana|*|->|Pedro|*|->|Rosa|*|->|Julio|*|->NULL
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo
{
	char nombre[20];
	struct nodo *siguiente;                                          // Auto referencia. Unir estructuras
}nodo;

int main()
{
	nodo *pt;                                                        // Puntero de tipo nodo

	pt=(nodo*)malloc(sizeof(nodo));                                  // Reserva memoria
	strcpy(pt->nombre,"Ana");                                        // Guardamos el texto en el puntero
	printf("\n%s -> ",pt->nombre);                                   // Imprime el contenido

	pt->siguiente=(nodo*)malloc(sizeof(nodo));                       // Segundo nodo
	strcpy(pt->siguiente->nombre, "Pedro");
	printf(" %s ->",pt->siguiente->nombre);

	pt->siguiente->siguiente=(nodo*)malloc(sizeof(nodo));            // Tercer nodo
	strcpy(pt->siguiente->siguiente->nombre, "Rosa");
	printf(" %s ->",pt->siguiente->siguiente->nombre);

	pt->siguiente->siguiente->siguiente=(nodo*)malloc(sizeof(nodo)); // Cuarto nodo
	strcpy(pt->siguiente->siguiente->siguiente->nombre, "Julio");
	printf(" %s ->",pt->siguiente->siguiente->siguiente->nombre);
	pt->siguiente->siguiente->siguiente->siguiente = NULL;           // El último nodo en su parte siguiente apunta a NULL

	printf(" NULL");
	printf("\n\n");
	free(pt->siguiente->siguiente->siguiente);                       // Liberación de memoria cuarto nodo
	free(pt->siguiente->siguiente);                                  // Liberación de memoria tercer nodo
	free(pt->siguiente);                                             // Liberación de memoria segundo nodo
	free(pt);                                                        // Liberación de memoria primer nodo
	return 0;
}
