#include <stdio.h>
int main(void)
{
    int a, b, c, d, suma, producto;
    printf("Introduce cuatro números enteros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    suma = a + b;
    producto = c * d;
    printf("La suma de %d y %d es %d\n", a, b, suma);
    printf("El producto de %d y %d es %d\n", c, d, producto);
    return 0;
}