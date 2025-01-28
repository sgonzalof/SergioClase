#include <stdio.h>
int main(void)
{
    int segundos, horas, minutos, segundos_restantes;
    printf("Introduce un número de segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes % 60;
    printf("%d segundos son %d horas, %d minutos y %d segundos\n", segundos, horas, minutos, segundos_restantes);
    return 0;
}