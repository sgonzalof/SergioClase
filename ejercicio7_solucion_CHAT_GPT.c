#include <stdio.h>

int main(void)
{
    /* Introduce por pantalla el número de refrescos que se vendieron y su precio */
    int c, n, l; // Números de refrescos vendidos
    float pc, pn, pl; // Precios de los refrescos
    float total;

    // Pide el número de refrescos vendidos y sus precios
    printf("Introduce el numero de colas vendidas y su precio: ");
    scanf("%d %f", &c, &pc);

    printf("Introduce el numero de naranjas vendidas y su precio: ");
    scanf("%d %f", &n, &pn);

    printf("Introduce el numero de limones vendidos y su precio: ");
    scanf("%d %f", &l, &pl);

    // Calcular el total
    total = (c * pc) + (n * pn) + (l * pl);

    // Crear la tabla con los productos, ventas, precios y totales
    char tabla[4][20] = {
        "PRODUCTO", "VENTAS", "PRECIO", "TOTAL",
        "COLA", "", "", "",
        "NARANJA", "", "", "",
        "LIMON", "", "", ""
    };

    // Llenar la tabla con las cantidades y precios
    snprintf(tabla[1] + 1, sizeof(tabla[1]) - 1, "%d", c);  // Cola vendida
    snprintf(tabla[2] + 1, sizeof(tabla[2]) - 1, "%d", n);  // Naranja vendida
    snprintf(tabla[3] + 1, sizeof(tabla[3]) - 1, "%d", l);  // Limón vendido

    snprintf(tabla[1] + 2, sizeof(tabla[1]) - 2, "%.2f", pc); // Precio Cola
    snprintf(tabla[2] + 2, sizeof(tabla[2]) - 2, "%.2f", pn); // Precio Naranja
    snprintf(tabla[3] + 2, sizeof(tabla[3]) - 2, "%.2f", pl); // Precio Limón

    // Imprimir la tabla
    printf("\nTabla de ventas:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%s\t", tabla[i][j]);
        }
        printf("\n");
    }

    // Imprimir el total de ventas
    printf("\nEl precio total de refrescos vendidos es %.2f euros\n", total);

    return 0;
}
