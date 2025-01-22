#include <stdio.h>
int main(void){
    int a, b, c, d, suma, promedio;
    printf("Introduce cuatro números enteros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    suma = a + b + c + d;
    promedio = suma / 4;
    printf("La suma de %d, %d, %d y %d es %d\n", a, b, c, d, suma);
    printf("El promedio de %d, %d, %d y %d es %d\n", a, b, c, d, promedio);
    return 0;
}