#include <stdio.h>
int main (void)
{
    int valor1=10, valor2=20, *puntero;
    puntero = &valor1;
    printf("El valor de la variable valor1 es %d\n", *puntero);
    printf("\n La direccion de memoria de la variable valor1 es %p\n", puntero);

    puntero = &valor2;
    printf("El valor de la variable valor2 es %d\n", *puntero);
    printf("\n La direccion de memoria de la variable valor2 es %p\n", puntero);

}