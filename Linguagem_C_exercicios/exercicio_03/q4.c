#include <stdio.h>

int main(void) {

    int num, num_penultimo = -1, num_ultimo = 1, variavel;

    printf("--- Sequência de Fibonacci ---\n");
    printf("Informe a sequência que deseja: ");
    scanf("%i", &num);

    if(num < 47) {
        printf("Sequência: ");
        for (int i = 0; i < num; i++) {
            variavel = num_penultimo + num_ultimo;
            
            printf("%i", variavel);
            num_penultimo = num_ultimo;
            num_ultimo = variavel;

            if(i != num - 1) {
                printf(", ");
            }
        }
    } else {
        printf("\n\033[1;31mErro estouro do valor da memória\033[0m\n");
    }
    
    printf("\n");
    return 0;
}