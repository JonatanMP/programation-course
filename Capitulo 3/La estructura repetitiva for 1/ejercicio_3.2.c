#include <stdio.h>

/*Suma de numeros positivos
el programa al recibir como datos N numeros enteros, obtiene la suma de los enteros positivos.*/

int main()
{
    int i, n, sum, num; //variables de tipo entero
    sum = 0;
    printf("ingrese el numero de datos: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        printf("ingrese el dato nuemro %d: ", i);
        scanf("%d", &num);

        if (num > 0)
            sum = sum + num;
    }

    printf("\nLa suma de los numero positivos es: %d", sum);

    return 0;
}