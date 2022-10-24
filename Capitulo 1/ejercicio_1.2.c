#include<stdio.h>

/*invierte datos
El programa, al recibir como dato un conjunto de datos de entrada, invierte el
orden de los mismos cuando los imprime*/

void main(void)
{
    int a, b, c, d;//variables de tipo entero
    printf("ingrese cuatro datos de tipo entero: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("\n %d %d %d %d ", d, c, b, a);
}