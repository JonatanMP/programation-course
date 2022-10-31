#include <stdio.h>

int main()
{
    int i = 0;//variable de tipo entero
    float sal, pro, nom = 0;// variable de tipo real.
    printf("ingrese el salario del profesor:\t");
    // se necesita el salario de almenos un profesor para que no de error.
    scanf("%f", &sal);

    do
    {
        nom = nom + sal;
        i++;
        printf("ingrese el salario del profesor -0 para terminar- :\t");
        scanf("%f", &sal);

    } while (sal);

    pro = nom / i;
    printf("\nNomina: %.2f \t Promedio de salarios: %.2f", nom, pro);

    return 0;
}