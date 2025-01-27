#include <stdio.h>

int main(void)
{
    int unidades;
    float precio, total;
    
    printf("Introduce el precio de un producto: ");
    scanf("%f", &precio);
    printf("Introduce el número de unidades: ");
    scanf("%d", &unidades);
    
    total = precio * unidades;
    printf("El precio total de %d unidades a %f euros cada una es %f euros\n", unidades, precio, total);
    
    return 0;
}
