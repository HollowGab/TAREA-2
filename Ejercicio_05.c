//Arellanes Aniceto Gabriel
// Ejercicio_4: Descuento
#include <stdio.h>

int main() {
    float compra, descuento, monto_final;

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 2500) 
    {
        descuento = compra * 0.08;
    }

    monto_final = compra - descuento;

    printf("El monto final a pagar es: $%.2f\n", monto_final);

    return 0;
}
