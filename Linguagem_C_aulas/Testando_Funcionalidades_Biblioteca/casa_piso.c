#include <stdio.h>
#include <math.h>

int main(void) {

    float casa_x, casa_y, piso_x, piso_y;

    printf("Informe o largura da casa: ");
    scanf("%f", &casa_x);

    printf("\nInforme o comprimento da casa: ");
    scanf("%f", &casa_y);

    printf("\nInforme o largura do piso: ");
    scanf("%f", &piso_x);

    printf("\nInforme o comprimento do piso: ");
    scanf("%f", &piso_y);

    float area_casa = casa_x * casa_y;
    float area_piso = piso_x * piso_y;
    float quantidade_de_pisos = ceil(area_casa / area_piso);

    printf("\nQuantidade dos pisos que serão usados: %2f\n", quantidade_de_pisos);

    return 0;
}