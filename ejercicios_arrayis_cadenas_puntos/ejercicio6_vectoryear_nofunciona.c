#include <stdio.h>
#include <time.h>
#include <string.h>
int main (void)
{
    int year[4], *pyear, numeroano,i;
    char anocadena;
    printf("Introduce un año (utiliza ceros a la izq para años<1000): ");
    scanf("%c", anocadena);
    printf("El año introducido es %c\n", anocadena);
    
    for (int i=0; i<4; i++)
    {
        anocadena[i]=atoi(anocadena[i]);    
        year[i]=anocadena[i];
    }
    if (numeroano%4==0)
    {
        if (numeroano%100==0 && numeroano%400==0)
        {
            printf("El año %d es bisiesto\n", numeroano);
        }
        else if (numeroano%100!=0)
        {
            printf("El año %d es bisiesto\n", numeroano);
        }
        else
        {
            printf("El año %d no es bisiesto\n", numeroano);
        }
    }    
    else 
    {
        printf("El año %d no es bisiesto\n", numeroano);
    }
    
    return 0;
    
}