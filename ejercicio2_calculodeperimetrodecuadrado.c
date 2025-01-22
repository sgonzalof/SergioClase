#include <stdio.h>
int main(void){
    int lado, perimetro;
    printf("Introduce el lado de un cuadrado: ");
    scanf("%d", &lado);
    perimetro = 4 * lado;
    printf("El perímetro del cuadrado de lado %d es %d\n", lado, perimetro);
    return 0;
}