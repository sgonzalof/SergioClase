#include<stdio.h>
#include<string.h>

int main (void)
{
    char c[]="", caracter;
    int l;
    printf ("introduce un caracter\n");
    scanf("%s", &c);
    l=strlen(c);             //intento que el usuario introduzca un solo caracter
    printf("%d\n", l);
   
    while (l!=1)
    {
        printf ("has introducido mas de un caracter, introduce un solo caracter\n");
        scanf("%s", &c);
        l=strlen(c);   
    }
    caracter=c[0];

    if (caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u' || caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U')
    {
        printf("El caracter introducido es una vocal\n");
    }
    else
    {
        printf("El caracter introducido no es una vocal\n");
    }

    return 0;

}