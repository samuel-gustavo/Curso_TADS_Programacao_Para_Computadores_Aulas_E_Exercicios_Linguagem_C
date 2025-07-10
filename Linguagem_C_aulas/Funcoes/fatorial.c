#include <stdio.h>

int fatorial(int num) {
    if(num <= 1) {
        return 1;
    }
    return num * fatorial(num - 1);
}

int main(void) {

    int valor_fatorial;

    printf("Informe um valor para calcular o fatorial: ");
    scanf("%i", &valor_fatorial);

    int resultado = fatorial(valor_fatorial);

    if(resultado > 0) {
        printf("Fatorial: %i! = %i\n", valor_fatorial, resultado);
    } else {
        printf("Erro ao calcular o fatorial!\n");
    }

    return 0;
}