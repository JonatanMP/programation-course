#include<stdio.h>
#include<math.h>

/*Suma de cuadrados
el programa al recivir como datos un grupo de enteros positivos,
obtiene el cuadrado de los mismos y la suma correspondiente a dichos cuaadrados.*/

int main()
{
    int num; //variable de tipo entero.
    long cua, suc = 0;
    printf("ingrese un numero entero -0 para terminar-:\t");
    scanf("%d",&num);

    while (num)
    //la condicion es verdadera mientras el entero es diferente de cero.
    {
        cua = pow (num,2);
        printf("%d al cubo es %ld ", num, cua);
        suc = suc + cua;
        printf("\ningrese un numero entero -0 para terminar-:\t");
        scanf("%d",&num);
    }

    printf("\nLa suma de los cuadrados es %ld", suc);

    return 0;    
}