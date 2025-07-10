#include <stdio.h>

int main(void) {

    float salario, comissao_vendas, porcentagem_acrescimo;

    printf("Informe o valor do Salário: ");
    scanf("%f", &salario);

    printf("\nInforme o valor das vendas realizadas: ");
    scanf("%f", &comissao_vendas);

    porcentagem_acrescimo = comissao_vendas * 0.05;

    printf("\nValor de acrescimo da comissão das vendas feitas: R$%.2f", porcentagem_acrescimo);
    printf("\nValor do salário final com 5%% de acrescimo das vendas: R$%.2f\n", salario + porcentagem_acrescimo);

    return 0;
}