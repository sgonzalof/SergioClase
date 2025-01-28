#include <stdio.h>
/*programa que resuelve sistemas de ecuaciones de dos incognitas*/
int main(void)
{
    /*declaracion de variables*/
    float a1, b1, c1, a2, b2, c2, x, y;
    /*introduccion de datos*/
    printf("Introduce los coeficientes de la primera ecuacion (a1, b1, c1): ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Introduce los coeficientes de la segunda ecuacion (a2, b2, c2): ");
    scanf("%f %f %f", &a2, &b2, &c2);
    /*calculo de las incognitas*/
    x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    /*salida de datos*/
    printf("La solucion del sistema de ecuaciones es x = %f, y = %f\n", x, y);
    return 0;
}