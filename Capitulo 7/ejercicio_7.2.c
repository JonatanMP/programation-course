#include <stdio.h>
#include <ctype.h>

// Funciones para el manejo de la biblioteca ctpe.h.

void main(void)
{
    char p1;
    printf("ingrese un caracter para analizar si este es un digito: ");
    p1 = getchar();
    if (isdigit(p1)) // la funcion isdigit regresa 1 si es un digito y 0 en caso contrario.
        printf("%c es un digito", p1);
    else
        printf("%c no es un digito");

    fflush(stdin);
    printf("\ningrese un caracter para examinar si este es una letra: ");
    p1 = getchar();
    if (isalpha(p1)) // la funfion isalpha regresa 1 si es una letra y 0 en caso contrario.
        printf("%c es una letra");
    else
        printf("%c no es una letra");

    fflush(stdin);
    printf("ingrese un caracter para examinar si este es una letra minuscula: ");
    p1 = getchar();
    if (isalpha(p1))
        if (islower(p1)) // la funcion islower regresa 1 si p1 es uns letra minuscula y 0 en caso contrario.
            printf("%c es una letra minuscula \n", p1);
        else
            printf("%c no es una letra minuscula \n", p1);
    else
        printf("%c no es una letra \n", p1);

    fflush(stdin);
    printf("ingrese una letra para convertirla de mayuscula a minuscula: ");
    p1 = getchar();
    if (isalpha(p1))
        if (islower(p1)) // la funcion islower regressa un 1 si p1 es una letra minuscula y 0 en caso contrario. La función isupper, por otra parte, regresa 1 si p1 es una letra mayúscula y 0 en caso contrario.
            printf("%c es una letra minuscula", p1);
        else
            printf("%c no es una letra minuscula", p1);
    else
        printf("%c no es una letra \n", p1);

    fflush(stdin);
    printf("\nIngrese una letra para convertirla de mayúscula a minúscula: ");
    p1 = getchar();
    if (isalpha(p1))
        if (isupper(p1))
            printf("%c fue convertida de mayúscula a minúscula \n", tolower(p1));
        /* La función tolower convierte de mayúscula a minúscula. Si la
        letra es minúscula no la modifica. La función toupper, por otra parte,
        convierte de minúscula a mayúscula. Si la letra es mayúscula no la
        modifica. */
        else
            printf("%c es una letra minscula \n", p1);
    else
        printf("%c no es una letra \n", p1);

}