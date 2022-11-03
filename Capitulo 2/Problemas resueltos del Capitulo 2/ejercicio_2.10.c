#include<stdio.h>
#include<math.h>

/*Par, impar o nulo*/

void main(void)
{
    int num;// variable de tipo entero.
    printf("ingrese un numero; ");
    scanf("%d",&num);
    if (num == 0)
        printf("\nNulo");
    else
        if (pow(-1, num) > 0)
            printf("\n%d es par", num);
        else
            printf("\n%d es impar", num);    
}