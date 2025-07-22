#include <stdio.h>

void passagem_valor(int numero);
void passagem_referencia(int * numero);

int main(void) {
    int n = 5;

    passagem_valor(n);

    printf("\n-> Valor de N: %i\n", n);

    passagem_referencia(&n);

    printf("\n-> Valor de N: %i\n", n);


    return 0;
}

void passagem_valor(int numero){
    numero = numero * 10;
    printf("\nResultado por valor: %i\n", numero);
}

void passagem_referencia(int * numero){
    *numero = *numero * 10;
    printf("\nResultado por referência: %i\n", *numero);
}