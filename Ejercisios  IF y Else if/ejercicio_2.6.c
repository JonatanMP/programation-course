#include<stdio.h>

/*el programa al resibir como dato el nivel del profesor, 
incrementa su salario en funcion de la tabla 2.3. */

int main()
{
int niv; /*variable de tipo entero */
float sal; /*varable de tipo real*/

printf("\ningrese el nivel academico del profesor: "); /*imprime texto en la consola*/
scanf("%d", &niv); /*entrada de datos*/

printf("\ningrese el salario: "); /*imprime texto por consola */
scanf("%f",&sal); /*recibe datos por consola*/

switch (niv)
printf("\ningrese el salario: ");
scanf("%f",&sal);

switch (niv)
{
    case 1: sal = sal * 1.0035;  break;
    case 2: sal = sal * 1.0041;  break;
    case 3: sal = sal * 1.0048;  break;
    case 4: sal = sal * 1.0053;  break;
}

printf("\nnivel %d \tnuevo salario: %8.2f", niv, sal);

}