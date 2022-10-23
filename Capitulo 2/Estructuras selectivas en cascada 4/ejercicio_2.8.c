#include <stdio.h>

/*el programa al recibir como dato la matricula, la carrera, el semestre y el promedio
de un alumno de una universidad privada, determina si este puede ser asistente de su carrera.*/

int main()
{
    int mat, car, sem; //variables de tipo entero.
    float pro; //variable de tipo real.

    printf("ingrese su matricula: ");
    scanf("%d", &mat);
    printf("ingrese la carrera \n1-industrial  *\n2-telematica  *\n3-computacion *\n4-mecanica");
    scanf("%d", &car);
    printf("ingrese semestre: ");
    scanf("%d", &sem);
    printf("ingrese su promedio: ");
    scanf("%f", &pro);

    switch(car)
    {

        case 1: if (sem >= 6 && pro >= 8.5)
            printf("\n%d %d %5.2f", mat, car, pro);
        break;

        case 2: if (sem >= 5 && pro >= 9.0)
            printf("\n%d %d %5.2f", mat, car, pro);
        break;
        
        case 3: if (sem >= 6 && pro >= 8.8);
            printf("\n%d %d %5.2f", mat, car, pro);
        break;

        case 4: if (sem >= 7 && pro >= 9.0)
            printf("\n%d %d %5.2f", mat, car, pro);
        break;

        default: 
            printf("\n Error en la carrera");
        break;

    }
          
    return 0;
}