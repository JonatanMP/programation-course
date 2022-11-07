#include<stdio.h>
/* Igualdad de expresiones.
El programa, al recibir como datos T, P y N, comprueba la igualdad de
una expresión determinada. */

void main(void)
{
    int t, p, n;//variables de tipo entero
    printf("ingrese los valores T, P y N: ");
    scanf("%d %d %d", &t, &p, &n);
    if (p != 0)    
        if (pow(t/p, n) == (pow(t, n) / pow(p, n)))
            printf("\nSe comprueba la igualda");
        else
            printf("\nNo se comprueba la igualdad");
    else
        printf("\nP tiene que ser diferente de cero");

}