#include<stdio.h>

/*Cubo-1.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función. En la solución del problema se utiliza una variable
global, aunque esto, como veremos más adelante, no es muy recomendable.*/

int cubo(void); // prototipo  de funcion.
int i; //variable global.

void main(void)
{
    int cub;
    for (i = 1; i <= 10; i++)
    {
        cub = cubo(); //llamada a la funcion cubo.
        printf("\nEl cubo de %d es: %d", i, cub);
    }

    int cubo(void) //declaracion de la funcion.
    /*la funcion calcula el cubo de la variable global I. */

    return (i*i*i);

}