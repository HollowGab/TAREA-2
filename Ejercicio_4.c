//Arellanes Aniceto Gabriel
// Ejercico_4: Tasa de interes mensual
#include <stdio.h>
int main()
{
    float T_i, interes, M_i, M_f;

    printf("¿Cual es su tasa de interes mensual? (ingrese solo el numero) \n");
    scanf("%f",&T_i);
    T_i=T_i/100;
    printf("¿Con que monto inicio? \n");
    scanf("%f",&M_i);
    interes= M_i*T_i;
    M_f= M_i+interes;
     printf("Al finalizar el mes usted obtendra: %.2f \n",M_f);
    return 0;
}
