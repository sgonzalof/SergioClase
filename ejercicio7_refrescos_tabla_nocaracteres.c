#include <stdio.h>
int main(void)
{
    /*introduce por pantalla numero de refrescos que se vendieron y precio */
    int c,n,l;
    float pc, pn, pl, total;
    printf("Introduce el numero de colas vendidas y su precio:");
    scanf("%d %f", &c, &pc);
    printf("Introduce el numero de refrescos de naranja vendidos y su precio:");
    scanf("%d %f", &n, &pn);
    printf("Introduce el numero de refrescos de limon vendidos y su precio:");
    scanf( "%d %f", &l, &pl);
    total=(c*pc)+(n*pn)+(l*pl);

    printf(" | PRODUCTO | VENTAS | PRECIO | TOTAL |\n");
    printf("---------------------------------------\n");
    printf(" | %8s | %6d | %6.2f | %8.2f |\n", "COLA", c, pc, c*pc);
    printf(" | %8s | %6d | %6.2f | %8.2f |\n", "NARANJA", n, pn, n*pn);
    printf(" | %8s | %6d | %6.2f | %8.2f |\n", "LIMON", l, pl, l*pl);
    printf("---------------------------------------\n");
    printf("------------------------------TOTAL %.2f",total);
    

   
    return 0;
}