#include <stdio.h>

/* incremento de precio
el programa al recibir como dato el precio de un producto importado aumenta un 11%
si el mismo es inferior a 1500 y 8% si es mayor o igual a dicho precio, ademas debe
mostrar por consola el nuevo precio. */

int main ()
{
    float pre; /* almacen el precio suminitrado por el usuario */
    float npr; /* almacena el nuevo precio del producto importado*/

    printf("ingrese el precio del producto: "); /*pide al usuario ingresar los el dato de el precio*/
    scanf("%f",&pre); /* almacena el dato suministrado por el usuario en la direccion de memoria de (pre) */

    if (pre < 1500)/* evalua si el precio es menor a 1500 */
    {
        npr = pre * 1.11; /* aumenta el 11% al precio recibido */
        printf("el nuevo precio del producto es: %7.2f", npr); /*imprime el resultado del aumento*/
    }
    else
    {
        npr = pre * 1.08; /* aumenta el 8% al precio recibido */
        printf("el nuevo precio del producto es: %7.2f",npr); /*imprime el resultado del aumento*/

    }
    
    return 0;
}