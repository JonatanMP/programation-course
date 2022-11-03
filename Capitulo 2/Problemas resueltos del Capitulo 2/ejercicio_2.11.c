#include<stdio.h>
/*Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en cuenta
la distancia entre las dos ciudades y el tiempo de permanencia del pasajero.*/

void main(void)
{
    int dis, tie;//variables de tipo entero
    float bil;//variable de tipo real.
    printf("ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &dis, &tie);
    if ((dis*2 > 500) && (tie > 10))
        bil = dis * 2 * 0.19 * 0.8;
    else
        bil = dis * 2 * 0.19;
    printf("\n\n Costo del billete: %7.2f", bil);
}