#include   <stdio.h>
int main (void)
{
    int num1, num2;
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("El número mayor es %d\n", num1);
    }
    else if (num1 < num2)
    {
        printf("El número mayor es %d\n", num2);
    }
    else
    {
        printf("Los números son iguales\n");
    }
    return 0;
}