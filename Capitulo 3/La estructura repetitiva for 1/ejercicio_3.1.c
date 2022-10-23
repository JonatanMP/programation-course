#include <stdio.h>

/*Nomina

el programa al recivir el salario de 15 profesores, optiene el total de la nomina de la universidad*/

int main()
{
    int i; //variable de tipo entero 
    float sal, nom; //variables de tipo real
    nom=0;

    for (i = 1; i <= 15; i++)
    {
        printf("ingrese el salario del profesor %d:\t", i);
        scanf("%f", &sal);
        nom = nom + sal;
    }

    printf("\nEl total de la nomina es: %.2f", nom); 


    return 0;
}