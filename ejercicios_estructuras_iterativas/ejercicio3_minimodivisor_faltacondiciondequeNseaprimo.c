#include <stdio.h>
int main (void)
{
    int num, i;
    printf("Introduce un número: ");
    scanf("%d", &num);
    if (num<2 || num)
    {
        printf("El número introducido no tiene mínimo divisor\n");
    }
    
    for (i=2; i<=num; i++)
    {
        if (num%i==0)
        {
            printf("El mínimo divisor de %d es %d\n", num, i);
            break;
        }
    }
    return 0;
}