#include <stdio.h>

int main(void) {

    int qtd_cavalos, qtd_ferraduras;

    printf("Informe a quantidade de cavalos: ");
    scanf("%i", &qtd_cavalos);

    qtd_ferraduras = qtd_cavalos * 4;

    printf("\nA quantidade total de ferraduras necessárias para todos os cavalos serão: %i\n", qtd_ferraduras);
    return 0;
}