#include<stdio.h>
/*Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el
número de días de internación de un cliente en un spa, calcula el costo
total del tratamiento.*/

void main(void)
{
    int tra, eda, dia;//variables de tipo entero.
    float cos;//variable de tipo real.
    printf("ingrese tipo de tratamiento, edad y dias: ");
    scanf("%d %d %d", &tra, &eda, &dia);
    switch(tra)
    {
        case 1: cos = dia * 2800; break;
        case 2: cos = dia * 1950; break;
        case 3: cos = dia * 2500; break;
        case 4: cos = dia * 1150; break;
        default: cos = -1; break;
    } 
    if (cos != -1)
    {
        if (eda >= 60)
            cos = cos * 0.75;
        else
            if (eda <= 25)
                cos = cos * 0.85;
            printf("\n\nClave de tretamiento: %d\tDias: %d\tCosto total: %8.2f", tra, dia, cos);
    }
    else
        printf("\nLa clave del tratamiento es incorrecta");

}