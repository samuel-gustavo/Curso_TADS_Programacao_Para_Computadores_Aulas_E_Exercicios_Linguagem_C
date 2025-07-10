#include <stdio.h>
#include <math.h>

int main(void) {

    float raio, comprimento, area;
    // C = 2 pi r;
    // A = pi r²

    printf("Informe o valor do raio da circuferência: ");
    scanf("%f", &raio);

    comprimento = 2 * M_PI * raio;
    area = M_PI * pow(raio, 2);

    printf("\nValor do comprimento da circunferência: %.2fcm\n", comprimento);
    printf("Valor a área da circunferência: %.2fcm\n", area);
    return 0;
}