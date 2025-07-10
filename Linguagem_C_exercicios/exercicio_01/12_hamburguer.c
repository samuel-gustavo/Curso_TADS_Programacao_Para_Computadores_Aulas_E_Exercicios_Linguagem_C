#include <stdio.h>

int main(void) {

    int qtd_hamburguer;
    float peso_queijo, peso_presunto, peso_pao;

    printf("Informe a quantidade de hamburgues: ");
    scanf("%i", &qtd_hamburguer);

    peso_queijo = qtd_hamburguer * 0.1;
    peso_presunto = qtd_hamburguer * 0.05;
    peso_pao = qtd_hamburguer * 0.1;

    printf("\nPeso do Queijo: %.1fkg", peso_queijo);
    printf("\nPeso do Presunto: %.1fkg", peso_presunto);
    printf("\nPeso do Pão do Hamburguer: %.1fkg\n", peso_pao);

    return 0;
}