#include <stdio.h>
#include <string.h>

#include "funcoes/tratamento_entrada_dados.h"
#include "funcoes/arquivos.h"

int main(void) {

    int opcao;

    while (opcao != 3) {
        printf("\n========= Bem-vindo ao Algoritmo de Floyd-Warshall =========\n\n");
        printf("1- Deseja carregar o arquivo texto para execução do Algoritmo\n");
        printf("2- Deseja informar dados para Sistema\n");
        printf("3- Sair do Sistema\n\n");
        printf("Escolha um das opções: ");
        scanf("%i", &opcao);

        switch (opcao) {
            case 1: {

                char caminho[201];

                limparBufferSistema();

                printf("\nInforme o caminho do Arquivo: ");
                fgets(caminho, 201, stdin);

                caminho[strcspn(caminho, "\n")] = '\0'; // Retira o \n que ficou no final da String

                if(confirmandoCaminhoEFormatoArquivo(caminho)) {
                    lerArquivoTxt(caminho);
                } 
                break;
            }
            case 2: {

                matrizAdjacencias();
                break;
            }
            case 3: {
                printf("\nSaindo do Sistema...\n");
                break;
            }
            
            default:
                printf("\nOpção inválida!\n");
                break;
        }
    }
    

    return 0;
}