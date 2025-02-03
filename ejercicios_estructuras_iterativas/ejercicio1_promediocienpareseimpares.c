#include<stdio.h> 
int main (void)
{
    int sumapares, sumaimpares, i;
    sumapares=sumaimpares=0;
    for (i=1; i<=200; i++)
    {
        if (i%2==0)
        {
            sumapares=sumapares+i;
        }
        else
        {
            sumaimpares=sumaimpares+i;
    }
    }
    printf ("La suma de los cien primeros números pares es %d\n", sumapares);
    printf("y su promedio es %.2f\n", (float)sumapares/100);
    
    
    printf ("La suma de los cien primeros números impares es %d\n", sumaimpares);
    printf("y su promedio es %.2f\n", (float)sumaimpares/100);

    
    
    return 0;
}