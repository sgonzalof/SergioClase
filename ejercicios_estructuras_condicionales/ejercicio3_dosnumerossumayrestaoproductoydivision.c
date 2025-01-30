#include <stdio.h>
int main(void)
{
    int num1, num2;
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    while (num2==0 || num1==num2) 
    {
        
        printf("Los numeros son iguales\no el segundo numero es igual a cero\nIntroduce el primer número: ");
        scanf("%d", &num1);
        printf("Introduce el segundo número: ");
        scanf("%d", &num2);
    }
    
    
    if (num1>num2)
    {
        printf("La suma de %d y %d es %d\n", num1, num2, num1 + num2);
        printf("La resta de %d y %d es %d\n", num1, num2, num1 - num2);
    }
    else
    {
        printf("El producto de %d y %d es %d\n", num1, num2, num1 * num2);
        printf("La division de %d y %d es %f\n", num1, num2, (float)num1 / num2);
    }






  
    return 0;

}