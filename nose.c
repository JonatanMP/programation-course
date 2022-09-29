/*********************************************/
/*    Programacion para mecatronica          */
/*  Nombre: Jonatan Matos Pérez              */
/*  Matricula: 2022-0384                     */
/*  Seccion: sabado                          */
/*  practica: tabla de multiplicacion        */
/*  Fecha: 28/5/2022                         */
/*********************************************/

#include <stdio.h>

int mtp = 1; 

int main ()
{
    while (mtp<=12)
    {
        printf("\ntabla del %d \n",mtp);
        int mtpc = 1;
        
        while (mtpc<=12)
        {
            printf("%d x %d = %d \n",mtp,mtpc,mtp*mtpc);
            mtpc++;
        }
        mtp++;
    }    
}

