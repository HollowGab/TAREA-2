//Arellnaes Aniceto Gabriel
//Ejercicio_7: Boleto de ferrocarril
#include <stdio.h>

int main() {
    float ida, DT, ticket, precio_final, descuento=0;
    int D;
    printf("Ingrese la distancia de ida (en km): ");
    scanf("%f", &ida);

    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &D);

    DT = ida * 2;
    ticket = DT * 0.23;
    
    if (D > 7 && DT > 800) 
    {
        descuento = ticket * 0.30;
        precio_final = ticket - descuento;
    }
    else
    {
       precio_final = ticket;
    }

    printf("El precio final del ticket es: $%.2f\n", precio_final);

    return 0;
}
