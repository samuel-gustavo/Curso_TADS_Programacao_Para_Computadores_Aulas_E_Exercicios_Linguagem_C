#include <stdio.h>
#include <string.h>

typedef struct Aluno{
    char nome[100];
    int matricula, idade;
    double nota1, nota2;
};

typedef struct Aluno Aluno;

void cadastrarAlunos(int n_alunos, Aluno * alunos);
void imprimirRelatorioAlunos(int n_alunos, Aluno * alunos);
double calcularMediaAluno(int matricula, Aluno * alunos);

int main(void) {
    int n_alunos;

    printf("-> Digite a quantidade de Alunos: ");
    scanf("%i", &n_alunos);

    Aluno alunos[n_alunos];

    cadastrarAlunos(n_alunos, alunos);
    imprimirRelatorioAlunos(n_alunos, alunos);

    printf("\n Valor média do Aluno: %.1lf\n", calcularMediaAluno(1, alunos));

    return 0;
}


void cadastrarAlunos(int n_alunos, Aluno * alunos) {
    printf("\n Cadastro de Alunos");
    printf("\n ---------------------------");
    for (int i = 0; i < n_alunos; i++) {
        scanf("%c");

        alunos[i].matricula = i + 1;
        printf("\n - Matricula: %i", alunos[i].matricula);

        printf("\n\n -> Nome: ");
        fgets(alunos[i].nome, 100, stdin);

        printf("\n -> Idade: ");
        scanf("%i", &alunos[i].idade);

        printf("\n -> Nota 1: ");
        scanf("%lf", &alunos[i].nota1);

        printf("\n -> Nota 2: ");
        scanf("%lf", &alunos[i].nota2);
    }
    
}

void imprimirRelatorioAlunos(int n_alunos, Aluno * alunos) {
    printf("\n ---------------------------");
    printf("\n Relatório de Alunos");
    printf("\n ---------------------------");
    for (int i = 0; i < n_alunos; i++){
        printf("\n * Matricula: %i", alunos[i].matricula);
        printf("\n * Nome: %s", alunos[i].nome);
        printf("\n * Idade: %i", alunos[i].idade);
        printf("\n * Nota 1: %.2lf", alunos[i].nota1);
        printf("\n * Nota 2: %.2lf", alunos[i].nota2);
    }
}

double calcularMediaAluno(int matricula, Aluno * alunos) {
    double nota1 = alunos[matricula - 1].nota1;
    double nota2 = alunos[matricula - 1].nota2;

    return (nota1 + nota2) / 2;
}
