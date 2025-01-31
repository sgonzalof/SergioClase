#include <stdio.h>
int main(void)
{
    int n, i;
    printf("Introduce un número entero para calcular sus potencias ");
    scanf("%d", &n);
    int tabla[n][4];
    printf("    N    N^2    N^3    N^4  \n");

    for (i=1; i<=n; i++)
    {
        tabla[i][0]=i;
        tabla[i][1]=i*i;
        tabla[i][2]=i*i*i;
        tabla[i][3]=i*i*i*i;
        printf("%5d %5d   %5d  %5d\n", tabla[i][0], tabla[i][1], tabla[i][2], tabla[i][3]);
    }
    printf ("----------------------------------------\n");
    printf("    N    N^2    N^3    N^4  \n");
    return 0;


}