#include <stdio.h>

void incrementar(int * ptrVar, int incremento);

int main(void) {
    int valor_incremento;
    int numero = 145;

    printf("-> Incrementar em quanto: ");
    scanf("%i", &valor_incremento);

    incrementar(&numero, valor_incremento);

    printf("-> Incremento Realizado: %i\n", numero);

    return 0;
}

void incrementar(int * ptrVar, int incremento) {
    *ptrVar = *ptrVar + incremento;
}