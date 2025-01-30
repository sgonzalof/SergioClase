#include    <stdio.h>
#include    <string.h>
int main(void)
{
    char cadena[100];
    int i, longitud;
    printf("Introduce una cadena: ");
    gets(cadena);
    longitud = strlen(cadena);
    printf("La cadena al revés es: ");
    for (i=longitud-1; i>=0; i--)
    {
        printf("%c", cadena[i]);
    }
    printf("\nLa longitud de la cadena es %d\n", longitud);
    return 0;
}