/*
 * El programa crea un vector int de n números dados por el usuario
 * utilizando memoria dinámica.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	                                                                    // *p -> puntero
	                                                                    // n -> número de elementos
	int *p, n;
	printf("\nIngrese el número de elementos > ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));                                      // Memoria dinámica para 'n' elementos
	                                                                    // Condición para asignar memoria
	if ( p == NULL) {printf("\nERROR al asignar memoria\n"); exit(-1);}
	printf("\n\n");
	for (int i = 0 ; i < n ; i++)
	{
		printf("Elemento[%d] > ",i);
		scanf("%d",(p+i));
	}
	printf("\n----Elementos de arreglo----\n");
	for (int i = 0 ; i < n ; i++)
	{
		printf(" %d ", *(p+i));
	}
	printf("\n\n");
	free(p);                                                            // Liberamos memoria asignada
	return 0;
}
