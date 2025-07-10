#include <stdio.h>

struct Alunos {
    int matricula;
    char nome[100];
    float nota;
};

#define QUANTIDADE_ALUNOS 10


int main(void) {

    struct Alunos alunos [QUANTIDADE_ALUNOS];

    for (int i = 0; i < 1; i++) {
        printf("\nInforme seu nome: ");
        scanf("%s", alunos[i].nome);
    }

    printf("Nome: %s", alunos[0].nome);
    

    return 0;
}