#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *ptr, b[80];
    // Mostrando tamaño de cada tipo de dato en bytes
    printf("\n\tTamaño de tipo de dato:");
    printf("\nEl tamaño de la int en bytes    > %lu \n",sizeof(int));
    printf("\nEl tamaño de la long en bytes   > %lu \n",sizeof(long));
    printf("\nEl tamaño de la double en bytes > %lu \n",sizeof(double));

    printf("\n\n");
    printf("\nIngrese un texto > ");
    fgets(b,80,stdin);
    ptr = (char *)malloc(sizeof(b));
    strcpy(ptr,b);

    printf("\nCadena b                     > %s",b);
    printf("\nCadena puntero               > %s",ptr);
    printf("\nTamaño de la cadena en bytes > %lu",sizeof(ptr));
    
    printf("\n");
    free(ptr);
    return 0;
}
