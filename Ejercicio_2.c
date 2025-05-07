// Arellanes Aniceto Gabriel
// Ejercicio_2: Calculadora del area y circunferencia de un circulo
#include <stdio.h>
#define PI 3.14159265358979323846
int main()
{
    float R,A,C;

    printf("Ingresa el radio del circulo \n");
    scanf("%f",&R);
    A= PI*(R*R);
     printf("El AREA del circulo es: %f \n",A);
    C= 2*PI*R;
    printf("La CIRCUNFERENCIA del circulo es: %f \n",C);
    return 0;
}
