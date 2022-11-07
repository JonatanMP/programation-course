#include<stdio.h>
#include<math.h>
/*Función.
El programa, al recibir como dato un valor entero, calcula el resultado de
➥una función.*/


void main(void)
{
    int y;//variable de tipo entero.
    float x;//variable de tipo real.
    printf("ingrese el valor de Y: ");
    scanf("%d",&y);
    if (y < 0 || y > 50)
        x = 0;
    else
        if (y <= 10)
            x = 4 / y - y;
        else
            if (y <= 25)
                x = pow(y, 3) - 12;
            else
                x = pow(y, 2) + (pow(y, 3) - 18);
    printf("\n\nY = %d\tX = %8.2f", y, x);
}