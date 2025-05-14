//Arellanes Aniceto Gabriel
//Ejercicio_12: producto de los N primeros numeros naturales.
#include <stdio.h>
int main() 
{
    int N, producto = 1, i;

    printf("¿Cuantos de los primeros numeros naturales quieres multiplicar?\n ");
    scanf("%d", &N);

        for (i = 1; i <= N; i++) 
        {
            producto *= i;
        }
        printf("El producto de los %d primeros numeros naturales es: %d \n", N, producto);
    

    return 0;
}
