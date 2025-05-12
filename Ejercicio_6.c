//Arellanes Aniceto Gabriel
//Ejercicio_6: Aumento de sueldo de trabajador
#include <stdio.h>

int main() {
    float sueldo, aumento, SF;

    printf("¿Cual es tu sueldo? \n ");
    scanf("%f", &sueldo);

    if (sueldo < 1000)
    {
        aumento = sueldo * 0.15;
    } 
    else 
    {
        aumento = sueldo * 0.12;
    }

    SF = sueldo + aumento;

    printf("Tu sueldo con el aumento es de: $%.2f\n", SF);

    return 0;
}

