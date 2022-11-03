#include<stdio.h>

//apuntadores, variables y valores.

void main(void)
{
    int x=3, y=7, z[5]= {2, 4, 6, 8, 10};
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]); 

    int *ix;    //ix representa un apuntador a un entero.
    ix = &x;    //ix apunta a x. ix tiene la direccion de x. .
    y = *ix;    //(y) toma el valor de (X), ahora vale 3.
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

    ix = &z[2];     //(ix) apunta al tercer elemento del arreglo (z).
    y = *ix;     //(y) toma el valor de (z[2]), ahora vale 6.
    *ix = 15; //(z[2]) se modifica, ahora vale 15.
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

    x = *ix + 5;    //(x) se modifica, ahora vale (z[2] + 5 = 20). recordar que (*ix) contiene el valor de z[2].
    *ix = *ix - 5;  //(z[2]) de modifica ahora vale 10.
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

    ++*ix;  //(z[2]) se modifica, se incrementa en 1.
    *ix += 1;   //(z[2]) se vuelve a modificar, ahora vale 12.
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

    x = *(ix + 1);  //(x) se modifica, el apuntador (ix) accede temporalmente a (z[3]) por lo tanto (x) toma este valor (8). observamos que (ix) no se resigna
    y = *ix;    //(y) se modifica, toma el valor de (z[2] (12)).
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

    ix = ix + 1;    //(ix) de modifica, opserva la forma de mover el apuntador. ahora (ix) apunta al cuarto elemento de (z[3]).
    y = *ix;    //(y) se modifica, ahora vale (Z[3] (8)).
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

    ix = ix + 4;    //(ix) se modifica. obseerva que el apuntador se mueve (4) posiciones y cae en una direccion afuera del arreglo. esto ocacionara un error.
    y = *ix;    //se modifica, toma el valor (basura) de una celda incorrecta. es un error que no señala el compilador del lenguage c. 
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

    ix = &x;     //(ix) apunta a la variable (x).
    ix = ix + 1;     //(ix) se mueve una posicion y cae en una celda incorrecta.
    x = *ix;    //(x) toma del valor (basura) de la celda a la que apunta (ix.)
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);



}