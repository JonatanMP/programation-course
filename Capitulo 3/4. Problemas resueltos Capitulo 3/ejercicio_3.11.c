#include<stdio.h>
/*Examen de admisión.
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran éstas.*/

void main(void)
{
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;//variables de tipo entero
    float cal;//variablede tipo real.
    printf("ingrese la calificacion del alumno: ");
    scanf("%f", &cal);
    while(cal != -1)
    {
        if (cal < 4)
            r1 += 1;
        else
            if(cal < 6)
                r2 += 1;
            else
                if (cal < 8)
                    r3 += 1;
                else
                if (cal < 9)
                    r4 += 1;
                else
                    r5 += 1;
        
        printf("\nIngrese la calificacion del estudiante: ");
        scanf("%f",&cal);
    }
    printf("\n0...3.99 =\t%d", r1);
    printf("\n4...5.99 =\t%d", r2);
    printf("\n6...7.99 =\t%d", r3);
    printf("\n8...9.99 =\t%d", r4);
    printf("\n9...10.0 =\t%d", r5);

}