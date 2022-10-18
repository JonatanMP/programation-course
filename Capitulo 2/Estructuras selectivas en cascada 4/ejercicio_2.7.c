#include <stdio.h>

/*El programa, al recibir como datos tres valores que representan las ventas de los vendedores de una tienda
de discos, escribe las ventas en orden decendentes. */

int main()
{
    float s, r, p; // variables de tipo real

    printf("ingrese las ventas de los tres vendedoes: ");
    scanf("%f %f %f", &p, &r, &s);

    if (p>s)
    {
        if (p>r)
        {
            if (s>r)
            {
                printf("\n\n El orden es: P, R y S: %8.2f %8.2f %8.2f", p, s, r);
            }
            else
            {
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.3f", p, s, r);
            }
            
        }
    }
    
}