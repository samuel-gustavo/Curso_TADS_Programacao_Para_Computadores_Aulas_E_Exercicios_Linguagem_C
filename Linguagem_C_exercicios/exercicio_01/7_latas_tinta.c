#include <stdio.h>
#include <math.h>

int main(void) {

    float qtd_latas_tinta, qtd_tintar_por_metro, area_parede, x_parede, y_parede;

    printf("Informe a largura da parede: ");
    scanf("%f", &x_parede);

    printf("\nInforme o comprimento da parece: ");
    scanf("%f", &y_parede);

    area_parede = x_parede * y_parede;

    qtd_tintar_por_metro = area_parede * 0.3;

    qtd_latas_tinta = qtd_tintar_por_metro / 2;

    printf("\nQuantidade de latas de tinta: %i\n", (int) ceil(qtd_latas_tinta));

    return 0;
}