#include <stdio.h>
void main()
{
    char *cadena="hola mundo";
    char*p;
    int i;
    p=cadena+1;
    for (i=0; i<5; i++)
    {
        printf("%c", *p);
        p+=2;
    }
printf("\n");
}