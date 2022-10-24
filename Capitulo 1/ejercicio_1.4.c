#include<stdio.h>

/*superficie del triangulo
El programa, al recibir como datos la basee y la altura de un triangulo
calcula su superficie. */

void main(void)
{
    float bas, alt, sup;//variables de tipo real.
    printf("ingrese la base y la altura del triangulo: ");
    scanf("%f %f", &bas, &alt);
    sup = bas * alt / 2;
    printf("\nLa superficie del triangulo es: %5.2f", sup);
}