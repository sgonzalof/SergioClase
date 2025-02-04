#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
    int dado1, dado2, q, i;
    srand(time(NULL)); 
	dado1=rand() % 6+1; 
    dado2=rand() % 6+1;


    for (i=1; i<=12; i++)
    {
        if (dado1==dado2)
        {
            printf("\ntirada %d\n", i);
            printf("Dado 1: %d\n", dado1);
            printf("Dado 2: %d\n", dado2);
            printf("Dado 1 y Dado 2 son iguales en la tirada %d\n", i);
            dado1=rand() % 6+1;
            dado2=rand() % 6+1;
        }
        else
        {
            printf("\ntirada %d\n", i);
            printf("Dado 1: %d\n", dado1);
            printf("Dado 2: %d\n", dado2);
            dado1=rand() % 6+1; 
            dado2=rand() % 6+1;
        }
    }


    return  0;
}


   
