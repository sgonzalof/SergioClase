#include <stdio.h>
int main(void){
    int a, b, suma, producto;
    printf("Introduce dos números enteros: ");
    scanf("%d %d", &a, &b);
    suma = a + b;
    producto = a * b;
    printf("La suma de %d y %d es %d\n", a, b, suma);
    printf("El producto de %d y %d es %d\n", a, b, producto);
    return 0;
}