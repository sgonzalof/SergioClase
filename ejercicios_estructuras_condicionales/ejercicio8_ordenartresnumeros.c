#include <stdio.h>
int main (void)
{
    int num1, num2, num3;
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    printf("Introduce el tercer número: ");
    scanf("%d", &num3);
    if (num1>num2 && num1>num3)
    {
        if (num2>num3)
        {
            printf("El orden de los números de mayor a menor es: \n%d\n%d\n%d\n", num1, num2, num3);
        }
        else
        {
            printf("El orden de los números de mayor a menor es: \n%d\n%d\n%d\n", num1, num3, num2);
        }
    }
    else if (num2>num1 && num2>num3)
    {
        if (num1>num3)
        {
            printf("El orden de los números de mayor a menor es: \n%d\n%d\n%d\n", num2, num1, num3);
        }
        else
        {
            printf("El orden de los números de mayor a menor es: \n%d\n%d\n%d\n", num2, num3, num1);
        }
    }
    else if (num3>num1 && num3>num2)
    {
        if (num1>num2)
        {
            printf("El orden de los números de mayor a menor es: \n%d\n%d\n%d\n", num3, num1, num2);
        }
        else
        {
            printf("El orden de los números de mayor a menor es: \n%d\n%d\n%d\n", num3, num2, num1);
        }
    }
    return 0;
}