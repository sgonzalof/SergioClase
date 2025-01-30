#include <stdio.h>
int main(void)
{
    //definir array de 10 elementos
    int array1[10], array2[10], i;
    for (i=0; i<10; i++)
    {
        array1[i]=i+1;
        array2[i]=array1[i];
    }

    printf("Array 1\n");
    for (i=0; i<10; i++)
    {
        printf("%d, ", array1[i]);
    }

    printf("\nArray 2\n");
    for (i=0; i<10; i++)
    {
        printf("%d, ", array2[i]);
    }
    

    return 0;


}