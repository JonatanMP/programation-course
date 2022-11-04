#include<stdio.h>
/*Factorial.
El programa calcula el factorial de un número entero.*/

void main(void)
{
    int num, i;//variable de tipo entero.
    long fac;//variable de tipo entero de largo alcance
    printf("ingrese el numero: ");
    scanf("%d",&num);
    if (num >= 0)
    {
        fac = 1;
        for (i=1; i <= num; i++)
            fac *= i;
        printf("\nEl factorial de %d es: %ld", num, fac);
    }
    else
    printf("\nError en el dato ingresado"); 
}