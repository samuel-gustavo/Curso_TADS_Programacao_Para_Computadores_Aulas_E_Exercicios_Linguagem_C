#include <stdio.h>

int maior_vetor(int vetor[], int tamanho) {
    int aux = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if(vetor[i] > aux) {
            aux = vetor[i];
        }
    }
    return aux;
}

int main(void) {
    
    int vetor[] = {10, 5, 8, 9, 11, 1};
    int maior = maior_vetor(vetor, 6);

    printf("Maior valor: %i\n", maior);
    return 0;
}