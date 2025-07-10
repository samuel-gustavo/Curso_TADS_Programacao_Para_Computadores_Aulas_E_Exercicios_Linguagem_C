#include <stdio.h>

int main(void) {
    
    int vetor[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Resultado {%i}: %i\n", i + 1, vetor[i]);
    }

    return 0;
}