#include <stdio.h>
int main(void)
{
    char caracter;
    printf("Introduce un caracter: ");
    scanf("%c", &caracter);
    if (caracter >= '0' && caracter <= '9')
    {
        printf("Es un número\n");
    }
    else if (caracter >= 'A' && caracter <= 'Z')
    {
        printf("Es una letra mayúscula\n");
    }
    else if (caracter >= 'a' && caracter <= 'z')
    {
        printf("Es una letra minúscula\n");
    }
    else if (caracter == ' ' || caracter == '\n' || caracter == '\t')
    {
        printf("Es un espacio en blanco\n");
    }
    else if ((caracter >= '!' && caracter <= '/') || (caracter >= ':' && caracter <= '@') || (caracter >= '[' && caracter <= '`') || (caracter >= '{' && caracter <= '~'))
    {
        printf("Es un caracter especial\n");

    } else {
        printf("No es un caracter conocido\n");
    }
    return 0;
}