#include<stdio.h>

int main()
{
    char *ptr[3];

    ptr[0]="Hola mundo";
    ptr[1]="espero sean felices";
    ptr[2]="como yo que siempre sonrío.";

    printf("\n");

    for ( int i=0 ; i<3 ; i++)
    {
        printf("%s ",ptr[i]);
    }

    printf("\n");

    return 0;
}