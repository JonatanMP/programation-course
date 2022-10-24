#include<stdio.h>
/*Suma de pagos
el programa al recivir como datos un conjunto de pagos realizados en el ultimo mes,
obtiene la suma de los mismos*/

int main()
{
    float pag, spa; // variables de tipo real. 
    spa = 0;
    printf("ingrese el primer pago:\t");
    scanf("%f", &pag);

    while (pag)
    // la condicion sera verdadera mientras el pago es diferente de cero.
    {
        spa = spa + pag;
        printf("ingrese el siguiente pago:\t");
        scanf("%f", &pag);
        // la proposicion que modifica la condicion es una lectura.
    }

    printf("\nEl total del pago del mes es: %.2f", spa);    

}