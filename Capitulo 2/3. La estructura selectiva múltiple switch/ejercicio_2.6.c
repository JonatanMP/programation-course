#include <stdio.h>

/*el programa al resibir como dato el nivel del profesor,
incrementa su salario en funcion de la tabla 2.3. */

int main()
{
    int niv;   /*variable de tipo entero */
    float sal; /*varable de tipo real*/

    printf("\ningrese el nivel academico del profesor: "); /*imprime texto en la consola*/
    scanf("%d", &niv);                                     /*entrada de datos*/

    printf("\ningrese el salario: "); /*imprime texto por consola */
    scanf("%f", &sal);                /*recibe datos por consola*/

    switch (niv) /*switch*/
    {
    case 1:
        sal = sal * 1.0035;
        break; /*asigna el nuevo salario*/
    case 2:
        sal = sal * 1.0041;
        break; /*asigna el nuevo salario*/
    case 3:
        sal = sal * 1.0048;
        break; /*asigna el nuevo salario*/
    case 4:
        sal = sal * 1.0053;
        break; /*asigna el nuevo salario*/
    }

    printf("\nnivel %d \tnuevo salario: %8.2f", niv, sal); /*imprime el resultado por consola*/

    return 0;
}