#include <stdio.h>

int main(void) {

    int fatorial = 1;
    double n, somatorio = 0.0;

    printf("Informe o valor de N: ");
    scanf("%lf", &n);

    if(n <= 0) {
        printf("\n\033[1;31mErro: Valor de N inválido!\033[0m\n");
    } else {
        for (int i = 1; i <= 10; i++) {
            for (int j = i; j > 0; j--) {
                fatorial *= j;
            }
            
            if(i % 2 == 0) {
                somatorio += (n / fatorial);
            } else if(i % 2 == 1) {
                somatorio -= (n / fatorial);
            }
            fatorial = 1;
        }
    }
    printf("Somatorio: %.6lf\n", somatorio);
    return 0;
}