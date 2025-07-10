#include <stdio.h>

int main(void) {

    float v_media, t_medio, r_gasolina, r_alcool, p_gasolina, p_alcool, c_gasolina, c_alcool;

    printf("Velocidade média do carro: ");
    scanf("%f", &v_media);

    printf("\nTempo médio da viagem: ");
    scanf("%f", &t_medio);

    printf("\nRedimento do carro usando gasolina: ");
    scanf("%f", &r_gasolina);

    r_alcool = r_gasolina + (r_gasolina * 0.07);

    printf("\nPreço do litro da gasolina: ");
    scanf("%f", &p_gasolina);

    printf("\nPreço do litro da álcool: ");
    scanf("%f", &p_alcool);

    c_gasolina = (v_media * t_medio) / r_gasolina * p_gasolina;

    c_alcool = (v_media * t_medio) / r_alcool * p_alcool;

    printf("\nCusto médio usando gasolina no automóvel: R$%.2f", c_gasolina);
    printf("\nCusto médio usando álcool no automóvel: R$%.2f", c_alcool);

    return 0;
}