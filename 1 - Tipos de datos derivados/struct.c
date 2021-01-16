// Iniciamos con una structura simple
//
//
#include <stdio.h>
#include <stdlib.h>

typedef struct INFORMACION 
{
	char nombre[20];
	char autor[20];
	char editoriar[20];
	int paginas;
}Libro;

int main()
{
	Libro L1;                                // Declaración de un libro

	printf("\n");
	printf("Ingrese el nombre > ");
	scanf("%[^\n]", L1.nombre);              // Ingresa texto hasta presionar Intro
	printf("Ingrese el autor > ");
	scanf("%*c%[^\n]", L1.autor);            // Igresa texto después de un char
	printf("Ingrese la editorial > ");
	scanf("%*c%[^\n]", L1.editoriar);
	printf("Ingrese el num de paginas > ");
	scanf("%d", &L1.paginas);

	printf("\nDatos:");
	printf("\nNombre: %s", L1.nombre);
	printf("\nAutor: %s", L1.autor);
	printf("\nEditorial: %s", L1.editoriar);
	printf("\nPag: %d", L1.paginas);
	printf("\n");

	return 0;
}
