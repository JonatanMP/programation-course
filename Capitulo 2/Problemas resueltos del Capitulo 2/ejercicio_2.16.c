#include<stdio.h>
/*Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de
un empleado, determina si el mismo reúne las condiciones establecidas por
la empresa para ocupar un nuevo cargo en una sucursal.*/

void main(void)
{
    int cla, cat, ant, res;//variables de tipo real.
    //float sal;// variable de tipo entero.
    printf("ingrese la clave, categoria y antiguedad del trabajador: ");
    scanf("%d %d %d", &cla, &cat, &ant);

    switch(cat)
    {
        case 2: if (ant >= 7)
                    res = 1;
                else 
                    res = 0;
                break;

        case 3:
        case 4: if (ant >= 5)
                    res = 1;
                else
                    res = 0;
                break;

        default: res = 0; 
            break; 
    }
    
    if (res == 1)
        printf("\nEl empleado con clave: %d, reune las condiciones para el puesto", cla);
    else
        printf("\nEl empleado con clave: %d, no reune las condiciones para el puesto", cla);

}