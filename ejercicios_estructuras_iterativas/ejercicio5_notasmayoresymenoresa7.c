#include <stdio.h>
int main (void)
{
    float nota[10];
    int i, may, ig;
    may=ig=0;
    printf ("Introduce las nota del alumno:  (notas entre 0 y 10) ");
    for (i=0; i<10; i++)
    {
        scanf ("%f", &nota[i]);
    }
    printf ("Notas mayores a 7: ");
    for (i=0; i<10; i++)
    {
        if (nota[i]>7)
        {
            may++;
        }
        else if (nota[i]==7)
        {
            ig++;
        }
    }
    printf ("el alumnso obtuvo %d notas mayores a 7\n", may);
    printf("y %d notas menores a 7\n", 10-may);
    if (ig>0)
    {
        printf("y %d notas iguales a 7\n", ig);
    }

    return 0;
}