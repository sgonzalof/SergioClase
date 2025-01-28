/*Realizar la carga de dos números enteros por teclado e imprimir su suma y su
producto.*/

#include <stdio.h>
int main(void){
    int a, b, suma, producto;
    printf("Introduce dos números enteros: ");
    scanf("%d %d", &a, &b); /*lee por teclado dos números enteros y calcula suma y producto*/
    suma = a + b;
    producto = a * b;
    printf("La suma de %d y %d es %d\n", a, b, suma);
    printf("El producto de %d y %d es %d\n", a, b, producto);
    return 0;
}