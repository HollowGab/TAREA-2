//Arellanes Aniceto Gabriel
//Ejercicio_13: Suma de numeros en un arreglo
#include <stdio.h>

void main() 
{
    int N, i=0;
    int suma = 0;
    
    printf("¿Cuantos numeros se sumaran? \n ");
    scanf("%d", &N);
    
    int S[N];
    
    printf("Introduce los %d numeros para sumarlos:\n", N);
    
    while (i<N) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &S[i]);
         suma += S[i];
         i++;
    }

    printf("La suma de los elementos del arreglo es: %d \n", suma);


}

