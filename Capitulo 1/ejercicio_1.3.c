#include<stdio.h>

/* Promedio de sueldos.
El programa, al recibir como datos seis sueldos de un empleado, calcula tanto el
ingreso total como el promedio mensual.*/

void main(void)
{
    int cla;//variable de tipo entero.
    float su1, su2, su3, su4, su5, su6, ing, pro;//variables de tipo real.
    printf("ingrese la clave del empleado y los 6 sueldos: \n");
    scanf("%d %f %f %f %f %f %f", &cla, &su1, &su2, &su3, &su4, &su5, &su6);
    ing = (su1 + su2 + su3 + su4 + su5 + su6);
    pro = ing / 6;
    printf("\n %d %5.2f %5.2f", cla, ing, pro);

}