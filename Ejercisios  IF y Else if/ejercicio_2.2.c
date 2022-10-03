#include <stdio.h>

int main()
{
    float pre; /* la variable pre, representa el precio del producto. */
    float npr; /* la variable npr, almacena el nuevo precio del producto.*/

    printf("ingrese el precio del producto: "); /*pide que se ingrese el precio al usuario*/
    scanf("%f",&pre);/* almacena el precio suministrado por el usuario en la direccion de memoria asignada a la variable (pre) */

    if (pre < 1500) /* hace una evaluacion para saber si hay que calcular el aumento*/
    {
        npr = pre * 1.11; /* calcula el aumento del 11% */
        printf("\nel nuevo precio del producto es: %7.2f", npr); /* imprime en consola el precio del producto con el aumento del 11% */
    }

    return 0;
}