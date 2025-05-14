//Arellanes Aniceto Gabriel
//Ejercicio_9: Tabla de multiplicar
#include <stdio.h>

int main() {
    int N, M, i;

    printf("¿De que numero quieres la tabla de multiplicar? \n");
    scanf("%d", &N);

    printf("La tabla de multiplicar de %d es:\n", N);
    for (i = 1; i <= 10; i++) 
    {
        M = N * i;
        printf("%d x %d = %d\n", N, i, M);
    }

    return 0;
}
