#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *cadena_punt;
    int tamano;

    tamano=(strlen("Practicas")+1)*sizeof(char);
    cadena_punt=(char*)malloc(tamano );
    strcpy(cadena_punt,"Practicas");
    puts(cadena_punt);
    // Ampliación del bloque de memoria
    tamano+=(strlen(" Profecionales\n")+1)*sizeof(char);
    cadena_punt=(char*)realloc(cadena_punt,tamano);
    strcat(cadena_punt," Profecionales\n");
    puts(cadena_punt);
    free(cadena_punt); // Liberación de memoria
}
