#include <stdio.h>
int main (void)
{ 
    int dia;
    printf("Introduce un número del 1 al 7: ");
    scanf("%d", &dia);
    switch (dia)
    {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("El número introducido no es válido\n");
            break;
    }
    return 0;

}
