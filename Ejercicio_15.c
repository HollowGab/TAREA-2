//Arellanes Aniceto Gabriel
//Ejercicio_15: Positivos, negativos o nulos
#include <stdio.h>

void main() 
{
    int N, i, num, positivos=0, negativos=0, nulos=0;
  
    printf("¿Cuantos numeros tiene tu lista? \n");
    scanf("%d", &N);
    int A[N]; 
  
    printf("Escribe los %d numeros de la lista:\n", N);
    while (i<N)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &A[i]);
        i++;
    } 
    i = 0;
    while (i < N) 
    {
        if (A[i] > 0) 
        {
            positivos++;
        } 
       else if (A[i] < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
        i++;
    }
   printf("Cantidad de números positivos: %d \n", positivos);
    printf("Cantidad de números negativos: %d \n", negativos);
    printf("Cantidad de números nulos: %d \n", nulos);

}

