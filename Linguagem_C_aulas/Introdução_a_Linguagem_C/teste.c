#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    srand(time(NULL));

    int num;
    int tentativas = 0;

    int aleatorio = rand() % 100;

    while (aleatorio != num)
    {
        printf("Informe um número: ");
        scanf("%i", &num);

        if(num > aleatorio) {
            printf("O número é menor\n");
        } else if(num == aleatorio) {
            printf("Parabéns você acertou! em %i tentativas\n", tentativas);
        } else {
            printf("O número é maior\n");
        }
        tentativas++;
    }
    
    // printf("Número aleatório: %d\n", aleatorio);

    return 0;
}