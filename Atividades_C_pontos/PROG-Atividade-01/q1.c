// Samuel Gustavo Lima da Silva
// Maria de Fátima Almeida Linhares de Oliveira

#include <stdio.h>
#include <math.h>

int main(void) {

    float x, potencia, resultado_funcao;

    printf("--> Teste Função <--\n\n");

    printf("Informe o valor de (x) para a função: ");
    scanf("%f", &x);

    potencia = pow(x, 2);

    if(potencia == 16.0) {
        printf("\nErro ao gerar imagem para o valor de x informado!\n");
    } else {
        resultado_funcao = (5 * x + 3) / (sqrt(potencia - 16));
        printf("\nResultado da imagem da função: %.2f\n", resultado_funcao);
    }
    return 0;
}