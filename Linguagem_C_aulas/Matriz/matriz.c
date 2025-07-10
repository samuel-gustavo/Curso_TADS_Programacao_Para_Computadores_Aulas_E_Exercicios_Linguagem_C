#include <stdio.h>

int main(void) {

    int linhas_A, colunas_A, linhas_B, colunas_B;

    printf("Linhas e Colunas de A: ");
    scanf("%i %i", &linhas_A, &colunas_A);

    printf("Linhas e Colunas de B: ");
    scanf("%i %i", &linhas_B, &colunas_B);

    if(linhas_A == linhas_B && colunas_A == colunas_B) {
        int matriz_A [linhas_A][colunas_A], matriz_B[linhas_B][colunas_B], matriz_C[linhas_A][colunas_B];

        printf("\n============= Preenchendo Matriz A =============\n");
        for (int i = 0; i < linhas_A; i++){
            for (int j = 0; j < colunas_A; j++){
                printf(" -> A[%i, %i]: ", i, j);
                scanf("%i", &matriz_A[i][j]);
            }
        }

        printf("\n============= Preenchendo Matriz B =============\n");
        for (int i = 0; i < linhas_B; i++){
            for (int j = 0; j < colunas_B; j++){
                printf(" -> B[%i, %i]: ", i, j);
                scanf("%i", &matriz_B[i][j]);
            }
        }

        printf("\n============= Adição Matricial =============\n");
        for (int i = 0; i < linhas_A; i++) {
            for (int j = 0; j < colunas_A; j++) {
                matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j];
                printf("%i ", matriz_C[i][j]);
            }
            printf("\n");
        }
        
        
    } else {
        printf("\n * Erro! As matrizes deve conter as mesmas dimensões");
    }

    return 0;
}
