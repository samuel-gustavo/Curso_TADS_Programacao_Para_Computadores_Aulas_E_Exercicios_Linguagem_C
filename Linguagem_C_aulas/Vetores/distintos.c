#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10


int main(void) {

    int vetor[N];
    int num_inseridos = 0;
    int numero;
    int existe_numero = 0;

    srand(time(NULL));

    printf("Números gerados: ");
    while (num_inseridos < N)
    {
        numero = rand() % 21;
        printf("%i ", numero);
        existe_numero = 0;

        for (int i = 0; i < N; i++)
        {
            if(numero == vetor[i]) {
                existe_numero = 1;
                break;
            }
        }

        if (existe_numero == 0)
        {
            vetor[num_inseridos] = numero;
            num_inseridos++;
        }
    }

    printf("\nVetor: ");
    for (int i = 0; i < N; i++)
    {
        printf("%i ", vetor[i]);
    }
    
    printf("\n");
    return 0;
}