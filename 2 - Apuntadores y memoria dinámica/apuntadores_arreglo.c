#include<stdio.h>
#include<string.h>

int main()
{
    char palabra[]={'H','O','L','A'};
    char *ptr;
    int longitud;

    ptr=palabra; // Aquí ambas variables apuntan a la misma dirección
    longitud = strlen(palabra);

    printf("\nCadena: %s",palabra);

    printf("\n\n\tRecorriendo la cadena\n");
    for ( int i=0 ; i < longitud ; i++ )
    {
        printf("\n*ptr[%d] > %c",i,ptr[i]);
    }

    printf("\n");
    return 0;
}