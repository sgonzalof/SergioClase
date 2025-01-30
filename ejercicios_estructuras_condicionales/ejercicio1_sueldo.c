#include <stdio.h>
int main(void)
{
    printf("Introduce el sueldo: ");
    float sueldo;
    scanf("%f", &sueldo);
    if (sueldo <= 3000)
    {
        printf("El sueldo es menor o igual a 3000 euros\n");
    }
    else
    {
        printf("El sueldo es mayor de 3000 euros.\nDebe abonar los impuestos correspondientes\n");
    
    return 0;
    }
}