#include <stdio.h>

/*El programa al recibir como dato el promedio de un alumno universitario
imprimira por consola aprobado, si su promedio es mayor o igual a 6 y reprobado si no lo es.   */


int main()
{
    float pro; /* almacena el promedio suministrado por el usuario */
    printf("ingrese el promedio: ");
    scanf("%f", &pro);

    if (pro >= 6) /* hace la evaluacion apra saber si es mayor a 6 */
    {
        printf("\nAprobado"); 
    }
    else /* si no es mayor a 6 entra al else. */
    {
        printf("\nReprobado");
    }

    return 0;
}