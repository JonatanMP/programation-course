#include<stdio.h>

/* Funciones para el manejo de caracteres de la biblioteca stdio.h */

void main(void)
{
    char P1, P2, P3 = '$';//Declaracion de las variables tipo caracter  p1, p2 y p3 a la cual se le asigna el simbolo $.
    printf("ingrese un caracter: ");
    P1 = getchar(); //utilizamos la funcion getchar para leer un caracter.
    putchar(P1); //utilizamos la funcion putchar para escribir un caracter.
    printf("\n");
    fflush(stdin);
    /* Luego de leer un caracter siempre es conveniente escribir la función fflush
    para limpiar el búfer, porque generalmente queda con basura y genera un error
    en la ejecución del programa. El error se produce porque cuando se ingresa un
    dato se oprime el return y luego cuando volvemos a leer un caracter o una
    cadena de caracteres se toma a ese return como el nuevo dato ingresado. */

    printf("\nElcaracter p3 es: ");
    putchar(P3); //se utiliza la funcion putchar para escribir el caracter almacenado en p3.
    printf("\n");
    printf("\ningrese otro caracter: ");
    fflush(stdin);
    scanf("%c", &P2); // utilizamos scanf con el formado de variables %c para leer un caracater.
    printf("%c", P2); //utilizamos printf con el formato de variable %c para escribir un caracter.
    
}