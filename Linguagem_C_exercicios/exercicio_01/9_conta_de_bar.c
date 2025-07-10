#include <stdio.h>

int main(void) {

    float total_conta, valor_manuel, valor_jose, valor_joao;

    printf("Informe o valor total da conta: ");
    scanf("%f", &total_conta);

    valor_jose = ((int) total_conta) / 3;
    valor_joao = ((int) total_conta) / 3;
    valor_manuel = (((int) total_conta) / 3) + (total_conta - ((int) total_conta));

    printf("\nJosé vai pagar: R$%.2f", valor_jose);
    printf("\nJoão vai pagar: R$%.2f", valor_joao);
    printf("\nManuel vai pagar: R$%.2f\n", valor_manuel);

    return 0;
}