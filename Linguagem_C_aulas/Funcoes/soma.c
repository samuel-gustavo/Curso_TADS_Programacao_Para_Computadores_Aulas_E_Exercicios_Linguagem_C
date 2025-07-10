#include <stdio.h>

float soma(float, float); // Protótipo

int main(void) {

    float num1, num2;

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    float resultado = soma(num1, num2);

    printf("Resultado: %i", resultado);

    return 0;
}

float soma(float n1, float n2) {
    return n1 + n2;
}