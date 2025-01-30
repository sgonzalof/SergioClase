#include <stdio.h>
int main (void)
{
    int tabla[3][2];
    int i, j, max, min, maxTotal, minTotal;

    //Leer datos y guardarlos en la tabla

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("Escriba el valor %d, %d: ", i, j);
            scanf("%d", &tabla[i][j]);
        }
    }

    //Mostrar la tabla

    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }
    //Calcular el valor máximos y mínimos de las filas y de la tabla
    maxTotal = minTotal = tabla[0][0];

    for (i=0; i<3; i++)
    {
        max = tabla[i][0];
        min = tabla[i][0];
        for (j=0; j<2; j++)
        {
            if (tabla[i][j] > max)
            {
                max = tabla[i][j];
            }
            if (tabla[i][j] < min)
            {
                min = tabla[i][j];
            }
            if(tabla[i][j] > maxTotal)
            {
                maxTotal = tabla[i][j];
            }
            if(tabla[i][j] < minTotal)
            {
                minTotal = tabla[i][j];
            }
        }
        printf("El valor máximo de la fila %d es %d\n", i+1, max);
        printf("El valor mínimo de la fila %d es %d\n", i+1, min);
        
    }
    // Mostrar el máximo y mínimo de toda la tabla
    printf("\nEl valor máximo de toda la tabla es %d\n", maxTotal);
    printf("El valor mínimo de toda la tabla es %d\n", minTotal);

    return 0;
}