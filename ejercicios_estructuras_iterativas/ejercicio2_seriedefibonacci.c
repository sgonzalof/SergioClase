#include <stdio.h>
int main(void)
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Introduce el número de términos: ");
    scanf("%d", &n);
    printf("Serie de Fibonacci: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}