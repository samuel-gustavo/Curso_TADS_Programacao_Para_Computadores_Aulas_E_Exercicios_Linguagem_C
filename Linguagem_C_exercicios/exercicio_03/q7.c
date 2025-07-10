#include <stdio.h>

int main(void) {

    int n, variavel;
    double t = 0.0;

    printf("Informe o valor de N: ");
    scanf("%i", &n);

    if(n <= 0) {
        printf("\n\033[1;31mErro: Valor de N inválido!\033[0m\n");
    } else {
        variavel = n;
        for (int i = 1; i <= n; i++) {
            t += i / (double) variavel--;
        }
        printf("\n\033[1;32mResultado: %.6lf\033[0m\n", t);
    }
    return 0;
}