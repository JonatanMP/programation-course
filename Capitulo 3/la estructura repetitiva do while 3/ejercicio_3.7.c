#include <stdio.h>
/*Lanzamiento de martillo.
El programa, al recivir como dato N lanzamientos de martillo, calcula el promedio
de los lanzamientos de la atleta cubana.*/

int main()
{
    int i, n; //variables de tipo entero.
    float lan, sla;//variables de tipo real.

    do
    {
        printf("ingrese el numero de lanzamientos:\t");
        scanf("%d", &n);

    } while (n<1 || n>11);
    //se uiliza el do while para varificar que el valor de N sea correcto.

    for (i = 1; i < n; i++)
    {
        printf("\nIngrese el lanzamiento %d: ", i);
        scanf("%f",&lan);
        sla=sla+lan;
    }

    sla= sla / n;
    printf("\nEl promedio de lansamientos es: %.2f", sla);

    return 0;    
    
}