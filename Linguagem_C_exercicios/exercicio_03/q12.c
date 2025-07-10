#include <stdio.h>

int main(void) {

    double notas1[20], notas2[20], notas3[20], frequencias[20], medias[20];
    double maior_nota_final = 0.0, menor_nota_final = 100.0, media_final_turma = 0.0;
    int alunos_reprovados = 0, alunos_reprovados_por_falta = 0;

    printf("---> Sistema de Cadastro de Notas <---");
    for (int i = 0; i < 20; i++) {
        printf("\nInforme a 1ª nota do %iº aluno: ", i + 1);
        scanf("%lf", &notas1[i]);
        printf("\nInforme a 2ª nota do %iº aluno: ", i + 1);
        scanf("%lf", &notas2[i]);
        printf("\nInforme a 3ª nota do %iº aluno: ", i + 1);
        scanf("%lf", &notas3[i]);
        printf("\nInforme a frequência do %iº aluno: ", i + 1);
        scanf("%lf", &frequencias[i]);
    }

    for (int i = 0; i < 20; i++) {
        medias[i] = ((notas1[i] * 2) + (notas2[i] * 3) + (notas3[i] * 5)) / 10;

        if(medias[i] > maior_nota_final) {
            maior_nota_final = medias[i];
        } else if(medias[i] < menor_nota_final) {
            menor_nota_final = medias[i];
        }

        media_final_turma += medias[i];

        if(frequencias[i] < 40) {
            alunos_reprovados_por_falta++;
        }
    }
    
    printf("\n---> Boletins <---\n");
    for (int i = 0; i < 20; i++) {
        if(medias[i] >= 60 && frequencias[i] >= 40) {
            printf("%iº Aluno | Média: %.2lf | \033[1;32mAprovado\033[0m\n", i + 1, medias[i]);
        } else {
            printf("%iº Aluno | Média: %.2lf | \033[1;31mReprovado\033[0m\n", i + 1, medias[i]);
            alunos_reprovados++;
        }
    }

    printf("\n---> Relatório Final <---\n");
    printf("\nMaior nota final: %.2lf", maior_nota_final);
    printf("\nMenor nota final: %.2lf", menor_nota_final);
    printf("\nMédia da turma: %.2lf", media_final_turma / 20);
    printf("\nTotal de alunos reprovados: %i", alunos_reprovados);
    printf("\nPercentual de alunos reprovados por falta: %.2lf", (100 * alunos_reprovados_por_falta) / 20);
    return 0;
}