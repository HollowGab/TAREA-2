//Arellnaes Aniceto Gabriel
//Ejercicio_10: 
#include <stdio.h>

int main() 
{
    int i, num;
    int positivos = 0, negativos = 0, nulos = 0;

    for (i = 0; i < 100; i++) 
    {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%d", &num);

        if (num > 0) 
        {
            positivos++;
        } 
        else if (num < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }

    printf("Cantidad de números positivos: %d \n", positivos);
    printf("Cantidad de números negativos: %d \n", negativos);
    printf("Cantidad de números nulos: %d \n", nulos);

    return 0;
}
