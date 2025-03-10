#include<stdio.h>
int main (void)
{
    int lista[5]={1,3,5,7,9};
    int *p1, *p2;
    int x;
    x =*(lista);
    p1=&lista[0];
    p2=lista;
    printf("%d, %d, %d\n", x, *p1, *p2);
    return 0;
}