#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int n) 
{
    if (n < 2) return 0;  // Los números menores que 2 no son primos
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return 0;  // Si tiene un divisor, no es primo
    }
    return 1;
}

// Función para encontrar el menor divisor de un número (mayor que 1)
int menorDivisor(int n)
{
    for (int i = 2; i <= n; i++) 
    {
        if (n % i == 0) return i;  // Devuelve el primer divisor encontrado
    }
    return n;  // Esto solo se ejecuta si el número es 1
}

// Función para obtener un número válido del usuario
int obtenerNumero() 
{
    int num;
    char entrada[50];

    while (1) 
    {
        printf("Introduce un número entero positivo: ");
        if (fgets(entrada, sizeof(entrada), stdin) != NULL) 
        {
            if (sscanf(entrada, "%d", &num) == 1 && num > 0) 
            {
                return num;
            }
        }
        printf("Entrada no válida. Inténtalo de nuevo.\n");
    }
}

int main() 
{
    int num = obtenerNumero();

    // Verificar si es primo
    if (esPrimo(num)) 
    {
        printf("El número %d es primo.\n", num);
    } 
    else 
    {
        int divisor = menorDivisor(num);
        printf("El número %d no es primo. Su menor divisor es %d.\n", num, divisor);
    }

    return 0;
}
