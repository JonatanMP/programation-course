# include <stdio.h>
# include <math.h>

/*El programa optiene el resultado de una funcion*/

int main ()
{
    int op, t; /*variables de tipo entero*/
    float res; /*varianle de tipo real*/
    printf("ingrese la opcion del calculo y el valor entero");
    scanf("%d %d", &op, &t);

    switch (op)
    {
    case 1: res =  t / 5;
        /* code */
        break;

    case 2: res = pow(t,t);
    /*la funcion pow esta definida en la biblioteca math.h*/
    break;

    case 3:
    case 4: res = 6 * t/2;
    break;

    default: res = 1;
        break;
    }

    
    
    return 0;

}