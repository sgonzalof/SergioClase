#include <stdio.h>
int main(void)
{
    /*introduce por pantalla numero de refrescos que se vendieron y precio */
    int c,n,l;
    float pc, pn, pl, total;
    char cola, naranja, limon, preciocol, precionar, preciolim;
    printf("Introduce el numero de colas vendidas y su precio:");
    scanf("%d, %f", &c, &pc);
    printf("Introduce el numero de refrescos de naranja vendidos y su precio:");
    scanf("%d, %f", &n, &pn);
    printf("Introduce el numero de refrescos de limon vendidos y su precio:");
    scanf( "%d , %f", &l, &pl);
    cola=(char)c;
    naranja=(char)n;
    limon=(char)l;
    preciocol=(char)pc;
    precionar=(char)pn;
    preciolim=(char)pl;
    char tabla[4][4];

    tabla[0][0]="PRODUCTO";
    tabla[0][1]="VENTAS";
    tabla[0][2]="PRECIO";
    tabla[0][3]="TOTAL";
    tabla[1][0]="COLA";
    tabla[2][0]="NARANJA";
    tabla[3][0]="LIMON";
    tabla[1][1]=cola;
    tabla[1][2]=naranja;
    tabla[1][3]=limon;
    tabla[2][1]=preciocol;
    tabla[2][2]=precionar;
    tabla[2][3]=preciolim;
    tabla[3][1]=(char)c*pc;
    tabla[3][2]=(char)n*pn;
    tabla[3][3]=(char)l*pl;
/*usar punteros para la tabla es decir que cada posicion de la tabla ssea un puntero que apunta a la variable que deberia ir en la tabla*/


    printf("El precio total de refrescos vendidos es %f euros\n", total);
    {
        for (i=0; i<4; i++)
         printf(tabla);

    }
    
   
    return 0;
}