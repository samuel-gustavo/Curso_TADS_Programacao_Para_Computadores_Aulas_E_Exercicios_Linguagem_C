// Samuel Gustavo Lima da Silva
// Maria de Fátima Almeida Linhares de Oliveira

#include <stdio.h>

int main(void) {

    int idade, quantidade_gotas;
    float peso;

    printf("--> Dosagem medicamento <--\n\n");

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    printf("\nInforme seu peso em Kg ex(8.5): ");
    scanf("%f", &peso);

    if(idade < 12) {
        if(peso >= 5.0 && peso <= 9.0) {
            quantidade_gotas = 125 / 25;

        } else if(peso >= 9.1 && peso <= 16.0) {
            quantidade_gotas = 250 / 25;

        } else if(peso >= 16.1 && peso <= 24.0) {
            quantidade_gotas = 375 / 25;

        } else if(peso >= 24.1 && peso <= 30.0) {
            quantidade_gotas = 500 / 25;

        } else {
            quantidade_gotas = 750 / 25;
        }
    } else {
        if(peso >= 60.0) {
            quantidade_gotas = 1000 / 25;
            
        } else {
            quantidade_gotas = 875 / 25;
        }
    }

    printf("\nQuantidade de Gotas: %i", quantidade_gotas);
    printf("\n");
    return 0;
}