#include <stdio.h>

int main(void) {

    int n;
    
    printf("Informe o valor de N: ");
    scanf("%i", &n);

    if(n == 0) {
        printf("\n\033[1;32mResultado: 0\033[0m\n");
    } else if(n > 0) {
        double e = 0.0;
        for (int i = 1; i <= n; i++) {
            e += 1 / (double) i;
        }
        printf("\n\033[1;32mResultado: %.6lf\033[0m\n", e);
    } else {
        printf("\n\033[1;31mErro: Valor ínvalido para N!\033[0m\n");
    }
    return 0;
}