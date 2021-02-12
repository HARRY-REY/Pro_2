#include <stdio.h>
#include <stdlib.h>

typedef struct DEPORTISTA
{
	char nombre[30];
	float altura, peso;
}Dep;

int main()
{
	Dep d1, *d;           // Crea una variable d1 y un puntero d de tipo struct

	d=&d1;                // Guarda la dirección de memoria de d1 en el puntero
	printf("\nNombre: ");
	fgets(d->nombre, 30, stdin);
	printf("Altura: ");
	scanf("%f",&d->altura);
	printf("Peso: ");
	scanf("%f",&d->peso);

	printf("\n\n----Datos del deportista---\n\n");
	printf("Nombre > %s "   , d-> nombre);
	printf("\nAltura > %.2f " , d-> altura);
	printf("\nPeso   > %.2f " , d-> peso);
	printf("\n\n");
	
	return 0;
}
