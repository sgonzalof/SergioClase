#include <stdio.h>
int main(void)
{
    /*introduce por pantalla numero de refrescos que se vendieron y precio */
    int c,n,l;
    float pc, pn, pl, total;
    printf("Introduce el numero de refrescos vendidos y su precio:");
    scanf("el numero de colas vendidas es %d y su precio es %f", &c, &pc);
    scanf("el numero de naranjas vendidas es %d y su precio es %f", &n, &pn);
    scanf("el numero de limones vendidos es %d y su precio es %f", &l, &pl);
    char cola=(char)c;
    char naranja=(char)n;
    char limon=(char)l;
    char preciocol=(char)pc;
    char precionar=(char)pn;
    char preciolim=(char)pl;
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



    printf("El precio total de refrescos vendidos es %f euros\n", total);
    {
       /* code */
         printf(tabla);

    }
    
   
    return 0;
}