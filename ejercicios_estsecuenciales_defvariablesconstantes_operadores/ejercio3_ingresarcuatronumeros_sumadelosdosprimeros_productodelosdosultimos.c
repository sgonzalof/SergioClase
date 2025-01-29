/*Escribir un programa en el cual se ingresen cuatro números, calcular e informar
la suma de los dos primeros y el producto del tercero y el cuarto.*/

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