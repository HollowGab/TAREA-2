//Arellanes Aniceto Gabriel 
// Ejercicio_16: Primero 100 numeros pares
#include <stdio.h>
void main() 
{
    int P[100];
    int i = 0;
    int num = 1;

    
    while (i < 100) 
    {
        if (num % 2 == 0) 
        {
            P[i] = num;
            i++;
        }
        num++;
    }

    printf("Los primeros 100 números pares son:\n");
    i = 0;
    while (i < 100) {
        printf(", %d", P[i]);
        i++;
    }

    printf("\n");
    
}
