/*
    El programa trabaja con funciones y un vector de struct.
    Pide el nombre de un alumno y su respectiva calificación.
*/

#include <stdio.h>
#include <stdlib.h>
#define CHAR 50
#define VEC 3

typedef struct CALIFIACIONES
{
    char nombre[CHAR];
    int resultado;
}CALIF;

CALIF lista [VEC];                                                  // Iniciamos el vector de tipo struct

void ingreso()
{
    for (int i=0 ; i < VEC ; i++)
    {
        printf("\nIngrese el nombre > ");
                                                                    // fgets(lista[i].nombre , CHAR , stdin);
        scanf("%[^\n]" , lista[i].nombre);                          // Al momento de imprimir la siguiente liena es mejor utilizar esto
        printf("Ingrese el resultado de %s > " , lista[i].nombre );
        scanf("%d" , &lista[i].resultado);
        getchar();                                                  // Necesario para que no ocurra algún error al leer el siguiente scanf
    }
}

void salida()
{
    printf("\n\tDatos\n");
    for (int i=0 ; i < VEC ; i++)                                   // Impresión iterada
    {
        printf("\nNombre > %s",lista[i].nombre);
        printf("\nResultado > %d" , lista[i].resultado);
    }
}

int main()
{
    ingreso();
    salida();
    printf("\n");
    return 0;
}
