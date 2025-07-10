#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define LINHAS 15
#define COLUNAS 45

typedef struct Funcionario {
    int idade;
} Funcionario;


int main(void) {
    
    // Declaração das variáveis
    char mapa_jogo[LINHAS][COLUNAS];

    srand(time(NULL));

    Funcionario funcionario [1];

    funcionario[0].idade = 10;

    printf("Idade: %i\n", funcionario[0].idade);
}