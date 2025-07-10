#include <stdio.h>

int main(void) {

    float fahrenheit, celsius;

    printf("Informe o valor da temperatura em Fahrenheit para conversão em Celsius: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0f / 9.0f);

    printf("Valor da temperatura convertida para Celsius: %.2f°C\n", celsius);

    return 0;
}