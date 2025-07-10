#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int num, primeiro_maior = 0, segundo_maior = 0;

    srand(time(NULL));

    printf("Sequência: ");
    for (int i = 1; i <= 15; i++) {
        num = (rand() % (100 - 10 + 1)) + 10;
        printf("%i", num);

        if (i != 15) {
            printf(", ");
        }
        
        if(num > primeiro_maior) {
            segundo_maior = primeiro_maior;
            primeiro_maior = num;
        } else if(num > segundo_maior && num != primeiro_maior) {
            segundo_maior = num;
        }
    }
    
    printf("\n\nMaior número gerado: %i", primeiro_maior);
    printf("\nSegundo maior número gerado: %i\n", segundo_maior);

    return 0;
}