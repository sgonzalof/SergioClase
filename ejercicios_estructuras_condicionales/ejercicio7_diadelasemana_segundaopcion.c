#include <stdio.h>
int main (void)

{
    int dia;
    printf("Introduce un número del 1 al 7: ");
    scanf("%d", &dia);
    if (dia==1)
    {
        printf("Lunes\n");
    }
    else if (dia==2)
    {
        printf("Martes\n");
    }
    else if (dia==3)
    {
        printf("Miércoles\n");
    }
    else if (dia==4)
    {
        printf("Jueves\n");
    }
    else if (dia==5)
    {
        printf("Viernes\n");
    }
    else if (dia==6)
    {
        printf("Sábado\n");
    }
    else if (dia==7)
    {
        printf("Domingo\n");
    }
    else
    {
        printf("El número introducido no es válido\n");
    }
    return 0;
}