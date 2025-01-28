/*Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro de
este (El perímetro de un cuadrado se calcula multiplicando el valor del lado por
cuatro)*/

#include <stdio.h>
int main(void){
    int lado, perimetro;
    printf("Introduce el lado de un cuadrado: ");
    scanf("%d", &lado);
    perimetro = 4 * lado;
    printf("El perímetro del cuadrado de lado %d es %d", lado, perimetro);
    return 0;
}