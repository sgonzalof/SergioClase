#include   <stdio.h>
#include <math.h>
int main (void)
{
    int lado1, lado2, lado3;
    printf("Introduce el primer lado: ");
    scanf("%d", &lado1);
    printf("Introduce el segundo lado: ");
    scanf("%d", &lado2);
    printf("Introduce el tercer lado: ");
    scanf("%d", &lado3);
    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("El triángulo es equilátero\n");
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        printf("El triángulo es isósceles\n");
    }
    else
    {
        printf("El triángulo es escaleno\n");
    }
    float p, area;
    p=(lado1+lado2+lado3)/2;
    area=sqrtf(p*(p-lado1)*(p-lado2)*(p-lado3));

    printf("El area del triangulo es: %f\n", area);
    
    
    
    
    
    return 0;



}