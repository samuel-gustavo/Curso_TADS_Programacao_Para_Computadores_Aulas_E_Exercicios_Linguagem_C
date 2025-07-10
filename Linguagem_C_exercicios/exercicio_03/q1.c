#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num1, num2, resultado = 0;

    printf("--- Mutiplicação e o operador ---\n");
    printf("Informe o primeiro número: ");
    scanf("%i", &num1);

    printf("\nInforme o segundo número: ");
    scanf("%i", &num2);

    int vezes = abs(num1);
    int somador = num2;

    for(int i = 0; i < vezes; i++) {
        resultado += somador;
    }

    if(num1 < 0) {
        resultado = -resultado;
    }

    printf("\n---> Resultado: %i\n", resultado);
    return 0;
}