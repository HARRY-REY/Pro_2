/*
    Aquí vemos la definición de apuntador y una operación
*/
#include<stdio.h>

int main()
{
    int x=5, y;
    int *ptr; // Declaración de un apuntador de tipo entero

    ptr=&x; // Se le asigna a 'ptr' la dirección de memoria de 'x'

    printf("\nLa dirección de memoria &x es > %p", &x);
    printf("\nLa dirección de memoria &ptr es > %p", &ptr);
    printf("\nLa dirección de memoria guardada de ptr es > %p", ptr); 
    printf("\nEl valor de *prt es > %d ", *ptr);
    printf("\nIngrese un valor entero para y > ");
    scanf("%d", &y);

    *ptr+=y; // Se realiza la operación (*ptr+y) y se guarda en *ptr
    printf("\nLa operación *ptr+y= %d",*ptr);
    printf("\n");
}