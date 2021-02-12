/*
 * El programa reserva memoria en tiempo de ejecución para una 
 * matriz de nxm.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **p; // Puntero a puntero
	int n,m;
	
	do
	{
		printf("\nFilas > ");
		scanf("%d",&n);
		printf("\nColumnas > ");
		scanf("%d",&m);
	}while(n<=1 && m<=1);

	p=(int**)malloc(n*sizeof(int*));
	// Condición para asignar memoria
	if(p == NULL){printf("\nERROR al asignar memoria\n"); exit(-1);}
	for( int i = 0 ; i < n ; i++)
	{
		p[i]=(int*)malloc(m*sizeof(int));		
		if(p[i] == NULL){printf("\nERROR al asignar memoria\n"); exit(-1);}

		for( int j = 0 ; j < m ; j++)
		{
			printf("Elemento[%d][%d] > ",i,j);
			scanf("%d",&p[i][j]);
		}
	} 
	printf("\n\n");
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = 0 ; j < m ; j++)
		{
			printf(" %d " ,*(*(p+i)+j));
		}
		printf("\n");
	}	
	printf("\n\n");
	// Liberación de memoria
	for ( int i = 0 ; i < n ; i++)
		free(p[i]);
	free(p);
}
