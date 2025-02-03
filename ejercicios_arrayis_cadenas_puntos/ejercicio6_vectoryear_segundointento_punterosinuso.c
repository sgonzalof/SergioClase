#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    int *mesyear, ano, i, feb;


    printf("Introduce un año (utiliza ceros a la izq para años<1000): ");
    scanf("%d", &ano);
    printf("El año introducido es %d\n", ano);

    // Determine if the year is a leap year to set February days
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        feb = 29;
    } else {
        feb = 28;
    }

    int year[]={31,feb,31,30,31,30,31,31,30,31,30,31};
    mesyear = year;

    
    for (i=0; i<12; i++)
    {
        printf("El mes %d tiene %d días\n", i+1, mesyear[i]);

    
}
return 0;
    
}