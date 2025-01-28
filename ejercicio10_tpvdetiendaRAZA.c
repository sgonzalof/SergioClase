#include <stdio.h>
int main()
{
    int id, cantidad, descuento;
    float precio, descuentotal, preciofinal, total;

    printf("Ingrese el id del producto: ");
    scanf("%d", &id);
    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &cantidad);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    printf("Ingrese el descuento: ");
    scanf("%d", &descuento);

    total = (float)cantidad * precio;
    descuentotal=(float)total*descuento/100;
    preciofinal=(float)total-descuentotal;
    printf("--------------RAZA----------------\n");
    printf("%d ---------------------------- %d\n", id, precio);
    printf("%d -------------------------- %.2f\n", cantidad, total);
    printf("%d -------------------------- %.2f\n", descuento, descuentotal);
    printf("TOTAL:----------------------- %.2f\n", preciofinal);


    return 0;
}