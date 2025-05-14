//Arellanes Aniceto Gabriel
//Ejercicio_8: Divisor
#include <stdio.h>

int main() {
    int N1, N2;

    printf("Dame el primer numero: ");
    scanf("%d", &N1);

    printf("Dame el segundo número: ");
    scanf("%d", &N2);
   
    if (N2 != 0 && N2 % N1 == 0) 
    {
        printf("%d es divisor de %d\n", N1, N2);
    }  
    else if ( N2 != 0 && N1 % N2 == 0) 
    {
        printf("%d es divisor de %d\n", N2, N1);
    } 
    
    else 
    {
        printf("Ninguno de los dos numeros es divisor del otro \n");
    }

    return 0;
}
