#include <stdio.h>

int main(void) {

    int contador = 1, maior, menor, numero, somatorio = 0;

    printf("\nInforme o %iº número: ", contador);
    scanf("%i", &numero);

    maior = menor = numero;
    somatorio += numero;

    if(numero != 0) {
        do {
            printf("\nInforme o %iº número: ", contador + 1);
            scanf("%i", &numero);
            
            if(numero == 0) break;

            if(numero > maior && numero != 0) {
                menor = maior;
                maior = numero;
            } else if(menor > numero && numero != maior && numero != 0) {
                menor = numero;
            }
            somatorio += numero;
            contador++;
        } while (1);
    }
    
    printf("\nMaior Número: %i", maior);
    printf("\nMenor Número: %i", menor);
    printf("\nMédia dos Números: %i\n", somatorio / contador);

    return 0;
}