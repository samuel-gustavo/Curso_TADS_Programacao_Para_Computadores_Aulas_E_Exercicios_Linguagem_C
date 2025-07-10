#include <stdio.h>

int main(void) {

    int num;

    printf("Informe um número para saber se ele é divisível por 3 ou por 7: ");
    scanf("%i", &num);

    if (num % 3 == 0)
    {
        printf("O número %i é divisivel por 3.\n", num);
    }
    
    if(num % 7 == 0) {
        printf("O número %i é divisivel por 7.\n", num);
    }

    return 0;
}