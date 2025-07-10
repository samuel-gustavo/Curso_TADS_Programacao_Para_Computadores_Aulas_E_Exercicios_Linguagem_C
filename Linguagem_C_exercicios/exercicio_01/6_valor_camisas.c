#include <stdio.h>

int main(void) {

    int qtd_camisas_p, qtd_camisas_m, qtd_camisas_g, valor_final;

    printf("Informe a quantidade de camisas pequenas: ");
    scanf("%i", &qtd_camisas_p);

    printf("\nInforme a quantidade de camisas pequenas: ");
    scanf("%i", &qtd_camisas_m);

    printf("\nInforme a quantidade de camisas pequenas: ");
    scanf("%i", &qtd_camisas_g);

    valor_final = (qtd_camisas_p * 15) + (qtd_camisas_m * 20) + (qtd_camisas_g * 25);

    printf("\nValor final das camisas: R$%i,00\n", valor_final);

    return 0;
}