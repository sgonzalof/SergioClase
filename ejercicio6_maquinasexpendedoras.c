#include <stdio.h>
int main (void)
{
    /*pedir por pantalla cuanto tiene que devolver*/
    printf("Introduce la cantidad a devolver: (multiplo de 5 en euros: ejemplo 1.85)");
    float vuelta;
    scanf ("%f", &vuelta);
    int i, j, q, k;
    i=0;
    j=0;
    q=0;
    k=0;
    /*la maquina dispone de monedas de .50, .20, .10, .05 euros y tiene que devolver el menor numero de monedas*/
    while (vuelta-0.50 >=.50)
    {   
        i=i+1;
    }
     while (vuelta-0.20 >=.20)
    {   
        j=j+1;
    }
     while (vuelta-0.10 >=.10)
    {   
        q=q+1;
    }
     while (vuelta-0.05 >=.05)
    {   
        k=k+1;
    }
    printf("La maquina devuelve %d monedas de 0.50 euros, %d monedas de 0.20 euros, %d monedas de 0.10 euros y %d monedas de 0.05 euros", i, j, q, k);
    return 0;
}