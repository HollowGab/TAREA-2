// Arellanes Aniceto Gabriel
// Ejercicio_3: Casa de Cambio
#include <stdio.h>
#define Dolar 11.96
int main()
{
    float D,P;

    printf("¿Cuantos dolares quieres cambiar? \n");
    scanf("%f",&D);
    P= Dolar*D;
     printf("%.2f dolares equivalen a %.2f pesos \n",D,P);
    return 0;
}
