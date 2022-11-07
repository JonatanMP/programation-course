#include<stdio.h>
/* Fibonacci.
El programa calcula y escribe los primeros 50 números de Fibonacci.*/

void main(void)
{
    int i, pri = 0, seg = 1, sig;//variables de tipo entero.
    printf("\t %d \t %d", pri, seg);

    for (i = 3; i <= 50; i++)
    {
        sig = pri + seg;
        pri = seg;
        seg = sig;
        printf("\t %d", sig);
    }
}