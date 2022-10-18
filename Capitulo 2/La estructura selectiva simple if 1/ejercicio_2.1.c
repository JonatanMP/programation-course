# include <stdio.h>

/* Promedio del curso.
El programa al recibir como dato el promedio del curso evalua si este es mayor a 6 y dice si este es aprobado o no.
posdata"queria modeficar el programa para que el promedio sea deacuerdo a los estandares del ITLA, pero no lo hice para evitar malos entendidos." */

int main()
{
    float pro; /*variable de tipo float */

    printf("ingrese el promedio del alumno: ");
    scanf("%f",&pro);

    if (pro >= 6) /*condicion para saber si es aprobado o no*/
    printf("\nAprobado");

    return 0;
}




