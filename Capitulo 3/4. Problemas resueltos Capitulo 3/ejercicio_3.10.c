#include<stdio.h>
#include<math.h>

void main(void)
{
    int n, i, num, spa= 0, sim = 0, cim = 0;//variables de tipo entero.
    printf("ingrese el numero de datos que se van a procesar:\t",i);
    scanf("%d",&n);
    if (n > 0)
    {
        for (i=1; i <= n; i++)
        {
            printf("\ningrese el valor del numero %d: ",i);
            scanf("%d", &num);
            if(pow(-1, num) > 0)
                spa += num;
            else
                sim += num;
                cim++;
        }
        printf("\nLa suma de los numeros pares es %d", spa);
        printf("\nEl promedio de los numeros impares es: %5.2f", (float)(sim/cim));
    }
    else
    {
        printf("\nEl valor de N es incorrecto");
    }
}