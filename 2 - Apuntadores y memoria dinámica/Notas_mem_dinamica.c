Gestión de memoria dinámica

malloc  > Reserva espacio en el heap a un objeto cuyo tamaño es en bytes.
        > El heap es un área de memoria que se utiliza para guardar estructuras dinámicas en tiempo de ejecución.
calloc  > Asigna espacio en el heap de un número de elementos de un tamaño determinado.
        > El bloque se limpia con ceros, para un tamaño mayor a 64kb, se debe utilizar farcalloc.
realloc > Cambia el tamaño del bloque apuntado, el nuevo tamaño puede ser mayor o menor sin perder información.
free    > Libera un bloque de memoria en el heap.
