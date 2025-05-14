//Arellanes Aniceto Gabriel
//Ejercicio_14: Buscar numero
#include <stdio.h>

void main() 
{
    int N, i, num, cont = 0;
  
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
    
    printf("¿Que numero deseas buscar? ");
    scanf("%d", &num);

    for (i=0; i<N; i++) 
    {
        if (A[i] == num) 
        {
            cont++;
        }
    }

    printf("El número %d aparece %d veces en la lista.\n", num, cont);

}
