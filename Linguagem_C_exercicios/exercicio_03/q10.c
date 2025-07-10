#include <stdio.h>

int main(void) {

    printf("Sequência de Primos: 2, ");
    for (int i = 1; i <= 120; i++) {
        for (int j = i - 1; j > 1; j--) {
            if(i % j == 0) {
                break;
            }
            if(j == 2) {
                printf("%i, ", i);
            }
        }
    }
    return 0;
}