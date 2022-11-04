#include<stdio.h>
/*Serie.
El programa imprime los términos y obtiene la suma de una determinada serie.*/

void main(void)
{
    int cam = 1, i = 2;
    long sse = 0;
    while(i <= 2500)
    {
        sse += i;
        printf("\t %d",i);
        if (cam > 0)
        {
            i += 5;
            cam = 0;
        }
        else
        {
            i += 1;
            cam = 1;
        }
    }
    printf("\nLa suma de la serie es: %ld",sse);        
}