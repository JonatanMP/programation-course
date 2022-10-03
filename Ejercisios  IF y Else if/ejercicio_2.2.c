#include <stdio.h>

int main()
{
    float pre; /* la variable pre, representa el precio del producto. */
    float npr; /* la variable npr, almacena el nuevo precio del producto.*/
    printf("ingrese el precio del producto: ");
    scanf("%f",&pre);

    if (pre < 1500)
    {
        npr = pre * 1.11;
        printf("\nel nuevo precio del producto es: %7.2f", npr);
    }

    return 0;
}