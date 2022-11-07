#include<stdio.h>

/*suma pagos
el programa obtiene la suma de los pagos realizados del ultimo mes*/

int main()
{
    float pag, spa = 0; //variables de tipo real
    printf("ingrese el primer pago:\t");
    scanf("%f", &pag);
    
    do
    {
        spa = spa + pag;
        printf("ingrese el siguirnte pago  -0 para terminar:\t ");
        scanf("%f", &pag);
    } while (pag);

    printf("\nEl total de pagos del mes es: %.2f", spa);

    return 0;    

}