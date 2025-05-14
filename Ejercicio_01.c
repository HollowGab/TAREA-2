// Arellanes Aniceto Gabriel
// Ejercicio_1: Suma, resta y multiplicacion de dos numeros
#include <stdio.h>
int main()
{
    int N1,N2,S,R,M;

    printf("Ingresa el primer numero:\n");
    scanf("%d",&N1);
    printf("Ingresa el segundo numero; \n");
    scanf("%d",&N2);
    S= N1+N2;
     printf("La SUMA de los dos numeros es: %d \n",S);
    R= N1-N2;
    printf("La RESTA de los dos numeros es: %d \n",R);
    M=N1*N2;
    printf("La MULTIPLICACION de los dos numeros es: %d \n",M);
    return 0;
}
