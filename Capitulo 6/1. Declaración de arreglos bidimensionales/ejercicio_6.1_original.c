#include<stdio.h>

/*Diagonal principal
El programa, al recivir como dato una matriz de tipo entero, escribe la diagonal principal.*/

const int tam = 3;

void lectura(int [][tam],int);  //prototipos de funciones.
void imprime(int [][tam], int);
/* observa que siempre es necesario declarar el numero de columnas. Si no lo haces, el compilador marcar un error de sintaxis. */

void main(void)
{
    int mat[tam][tam];
    lectura(mat, tam);
    imprime(mat, tam);
}

void lectura(int a[][tam], int f)
/*La funcion lectura se utiliza para leer un arreglo bidimencional. observa
que solo se debe pasar como parametro el numero de fila ya que la matriz
es cuadrada. */

{
    int i,j;
    for (i = 0; i<f; i++)
    {
        for (j = 0; j<f; j++)
        {
            printf("ingrese el elemento %d %d. ", i+1, j+1);
            scanf("%d", &a[i][j]);            
        }
        
    }

    
    
}

void imprime(int a[][tam], int f)
    /* La funcion imprime se utiliza para escribir un arreglo bidimencional
    cuatro de (f) filas y columnas. */
{
    int i,j;
    for (i = 0; i<f; i++)
    {
        for (j = 0; j<f; j++)
        {
            if (i == j)
            {
                printf("\nDiagonal %d %d: %d ", i, j, a[i][j]);
            }
                
        }
            
    }
        
}