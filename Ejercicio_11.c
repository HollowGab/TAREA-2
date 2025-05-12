//Arellanes Aniceto Gabriel
// Ejercicio_11: Suma de pares
#include <stdio.h>
int main() {
    int suma = 0, i=10;
    for (i; i <= 50; i++) 
    {
        if (i % 2 == 0) 
        {  
            suma= suma+i;
        }
    }
    printf("La suma de los números pares comprendidos entre 10 y 50 es: %d \n", suma);

    return 0;
}
