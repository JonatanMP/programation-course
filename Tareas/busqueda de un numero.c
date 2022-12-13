#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num = 86;
    int i;
    time_t seed = 0;
    srand(time(&seed));
    
    int a[10];
    for (i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
        printf("Numero [%d] = %d",i,a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        /* code */
    }
    
    return 0;
}