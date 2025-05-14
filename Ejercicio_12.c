//Arellanes Aniceto Gabriel
//Ejercicio_12: producto de los N primeros numeros naturales.
#include <stdio.h>
int main() {
    int N;
    int producto = 1;
    int i = 1;

    printf("¿Cuantos de los primeros numeros naturales quieres multiplicar? \n ");
    scanf("%d", &N);
    
    while (i <= N) 
    {
            producto *= i;
            i++;
    }
    
    printf("El producto de los %d primeros numeros naturales es: %d \n", N, producto);


    return 0;
}
