#include <stdio.h>
int main(void)
{
    int num, digitos = 0;
    printf("Introduce un número: ");
    scanf("%d", &num);
    if (num == 0)
    {
        digitos = 1;
    }
    else
    {
        while (num != 0)
        {
            num /= 10;
            digitos++;
        }
    }
    printf("El número tiene %d dígitos\n", digitos);
    return 0;
}