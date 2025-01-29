#include <stdio.h>
int main(void)
{
    printf("Introduce el sueldo: ");
    scanf("%f", &sueldo);
    if (sueldo <= 3000)
    {
        printf("El sueldo es menor de 3000 euros\n");
    }
    else
    {
        printf("El sueldo es mayor o igual a 3000 euros\n");
    }