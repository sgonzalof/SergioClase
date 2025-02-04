#include <stdio.h>
int main (void)
{
    int i;
    i=1;

    printf("\n1-100   BUCLE WHILE -DO\n");
    while (i<=101)                  //  1-100 bucle while - do
    {
        printf("%d-", i);
        i++;
    }

    printf("\n\n1-100   BUCLE FOR\n");
    for (i=1; i<101; i++)      //  1-100 bucle for 
    {
        printf("%d-", i);
    }

    printf("\n\n1-100   BUCLE DO-WHILE\n");
    i=1;
    do                          //  1-100 bucle do-while
    {
        printf("%d-", i);
        i++;
    } while (i<101);


    return 0;
}
