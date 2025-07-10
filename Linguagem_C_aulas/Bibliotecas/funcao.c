#include <stdio.h>
#include <math.h>

int main(void) {

    float x;

    printf("Forneça um número para executar uma função: ");
    scanf("%f", &x);

    float resultado = pow(x, 2) + (2 * x) - 5;

    printf("Resultado: %.2f\n", resultado);

    return 0;
}