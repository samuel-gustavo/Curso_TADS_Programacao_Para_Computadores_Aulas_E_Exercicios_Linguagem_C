#include <stdio.h>

int main(void) {

    int valor_total, qtd_moedas_1real, qtd_notas_5, qtd_notas_10, qtd_notas_50, qtd_notas_100;
    
    printf("Informe a quantidade de moedas de 1 real: ");
    scanf("%i", &qtd_moedas_1real);

    printf("Informe a quantidade de notas de 5: ");
    scanf("%i", &qtd_notas_5);

    printf("Informe a quantidade de notas de 10: ");
    scanf("%i", &qtd_notas_10);

    printf("Informe a quantidade de notas de 50: ");
    scanf("%i", &qtd_notas_50);

    printf("Informe a quantidade de notas de 100: ");
    scanf("%i", &qtd_notas_100);

    valor_total = qtd_moedas_1real + (qtd_notas_5 * 5) + (qtd_notas_10 * 10) + (qtd_notas_50 * 50) + (qtd_notas_100 * 100);

    printf("Valor total: R$%i,00\n", valor_total);

    return 0;
}