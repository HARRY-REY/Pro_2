/*
    Este programa no tiene mucha utilidad XD, solo un ejemplo.
*/
#include<stdio.h>
#include<ctype.h> // Libreria para cambiar lo ingresado a mayusculas 

enum semana {LUNES=1, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};
typedef enum semana semanita;

int main()
{
    semanita dia;

/*
    char respuesta[10];

    printf("\nIngrese un día de la semana > ");
    scanf("%s", respuesta);

    // Convirtiendo texto en mayusculas
    for ( int i=0 ; respuesta[i] != '\0' ; ++i)
    {
        respuesta[i] = toupper(respuesta[i]);
    }

    // dia = respuesta; // No funciona 

    printf("\nEl día %s es el número %d de la semana",respuesta,dia);
*/
    dia = JUEVES;
    printf("\nNúmero %d de la semana",dia);
    printf("\n");
    return 0;
}