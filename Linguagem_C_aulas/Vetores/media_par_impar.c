#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(void) {

    int vetor[N];
    int num_aleatorio, media_valores_pares, media_valores_impares, contagem_pares = 0, contagem_impares = 0;
    
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        num_aleatorio = rand() % 100;
        vetor[i] = num_aleatorio;

        if(num_aleatorio % 2 == 0) {
            contagem_pares++;
        } else {
            contagem_impares++;
        }

        if(i == (N - 1)) {
            media_valores_pares = contagem_pares / N;
            media_valores_impares = contagem_impares / N;
        }
    }
    
    printf("Pares maiores que a média: ");
    for (int i = 0; i < N; i++){
        printf("%i : %i\n", media_valores_pares, vetor[i]);
        if (media_valores_pares > vetor[i]) {
            printf("%i ", vetor[i]);
        }
    }

    printf("\nImpares maiores que a média: ");
    for (int i = 0; i < N; i++){
        if (media_valores_impares > vetor[i]) {
            printf("%i ", vetor[i]);
        }
    }
    
    printf("\n");
    return 0;
}