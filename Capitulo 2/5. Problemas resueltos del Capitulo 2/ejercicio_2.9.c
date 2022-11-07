#include<stdio.h>
#include<math.h>

/*
el programa al recicbir como datos tres valores enteros,
establece si los mismos satisfacen una exprecion determinada. */


void main(void)
{
    int r, t, q;// variables de tipo entero
    float res;// variable de tipo real.
    printf("ingrese los valores R T Q: ");
    scanf("%d %d %d", &r, &t, &q);    
    res = pow(r, 4) - pow(t, 3) + 4 * pow(q, 2);
    if (res < 820)
    {
        printf("\nR = %d\t T = %d\t  Q = %d", r, t, q);

    }
    

    


}