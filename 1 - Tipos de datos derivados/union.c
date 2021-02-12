/*
    El valor de union cambiar y queda guardado unicamente el último valor ingresado
*/
#include <stdio.h>
#include <stdlib.h>

typedef union DATOS
{
    int numero;
    float decimal;
    char palabra[10];
}dat;

int main()
{
    dat experimento;

    printf("\nIngrese un valor entero > ");
    scanf("%d", &experimento.numero);
    printf("Dato: %d" , experimento.numero);
    printf("\nIngrese un valor flotante > ");
    scanf("%f", &experimento.decimal);
    printf("Dato: %.2f" , experimento.decimal);
    printf("\nIngrese una palabra > ");
    scanf("%s", experimento.palabra);
    printf("Dato: %s" , experimento.palabra);
    printf("\nIngrese un valor flotante > ");

    printf("\n");
    printf("\n\tDatos\n");
    printf("\nEntero: %d " , experimento.numero);
    printf("\nFlotante: %.2f " , experimento.decimal);
    printf("\nPalabra: %s " , experimento.palabra);
    printf("\n");

    return 0;
}