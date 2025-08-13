#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "arquivos.h"
#include "tratamento_entrada_dados.h"
#include "algoritmo_floyd_warshall.h"

int confirmandoCaminhoEFormatoArquivo(const char * caminho) {

    // Verificando se o arquivo termina com .txt
    const char * extensao = strrchr(caminho, '.');
    if(extensao == NULL || strcmp(extensao, ".txt") != 0) {
        printf("Tipo de arquivo não é válido");
        return 0;
    }

    // Tentando abrir o arquivo
    FILE * arquivo = fopen(caminho, "r");
    if(arquivo == NULL) {
        printf("Diretório do Arquivo inexistente!");
        return 0;
    }

    fclose(arquivo); // Fechando o arquivo que foi aberto
    return 1;
}

void lerArquivoTxt(const char * caminho) {
    FILE *arquivo = fopen(caminho, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    char linha[1024];
    int qtd_cidades = 0;

    // Lê a quantidade de cidades
    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        qtd_cidades = atoi(linha);
        if (qtd_cidades <= 0) {
            printf("Quantidade de cidades inválida.\n");
            fclose(arquivo);
        }
    } else {
        printf("Erro ao ler quantidade de cidades.\n");
        fclose(arquivo);
    }

    // Lê os nomes das cidades
    char cidades[qtd_cidades][30];
    for (int i = 0; i < qtd_cidades; i++) {
        if (fgets(linha, sizeof(linha), arquivo) != NULL) {
            linha[strcspn(linha, "\r\n")] = 0; // Remove \n e \r
            strncpy(cidades[i], linha, 29);
            cidades[i][29] = '\0'; // Garante terminação
        } else {
            printf("Erro ao ler o nome da cidade %d.\n", i);
            fclose(arquivo);
        }
    }

    // Lê a matriz de distâncias
    float distancias[qtd_cidades][qtd_cidades];
    for (int i = 0; i < qtd_cidades; i++) {
        if (fgets(linha, sizeof(linha), arquivo) != NULL) {
            char *separador = strtok(linha, ";");
            for (int j = 0; j < qtd_cidades; j++) {
                if (separador == NULL) {
                    printf("Erro: número insuficiente de valores na linha %d.\n", i + 1);
                    fclose(arquivo);
                }
                distancias[i][j] = strtof(separador, NULL);
                separador = strtok(NULL, ";");
            }
        } else {
            printf("Erro ao ler distâncias da linha %d.\n", i);
            fclose(arquivo);
        }
    }

    fclose(arquivo);

    float matrizDistanciasMinimas[qtd_cidades][qtd_cidades];
    int matrizPredecessores[qtd_cidades][qtd_cidades];

    printf("\n\nExecutando Algoritmo de Floyd-Warshall nos dados fornecidos");
    printf("\n\nPor favor aguarde...\n");

    algoritmo_floyd(qtd_cidades, cidades, distancias, matrizDistanciasMinimas, matrizPredecessores);

    char decisao;
    while (decisao != 'y' && decisao != 'n') {
        printf("\nDeseja salvar os resultados em um arquivo de texto? (y, n): ");
        scanf(" %c", &decisao);
        limparBufferSistema();

        if(decisao != 'y' && decisao != 'n') {
            printf("\nopção inválida!\n");
        }
    }

    decisao = tolower(decisao);

    if (decisao == 'y') {
        salvandoEmArquivoResultadoAlgoritmoFloyd(qtd_cidades, matrizDistanciasMinimas, matrizPredecessores);
        printf("\nArquivo Salvo com Sucesso!\n");
    }
}

void matrizAdjacencias() {
    // A quantidade de cidades que o usuário deseja consultar as distâncias
    int qtd_cidades = 0;

    while (qtd_cidades < 3) {
        printf("\nInforme a quantidade de cidades (pelo menos três): ");
        scanf("%i", &qtd_cidades);

        if (qtd_cidades < 3) {
            printf("\nQuantidade de cidades inválida!");
        }
    }

    printf("\n");
    limparBufferSistema();

    // O usuário informa os nomes das cidades
    char cidades[qtd_cidades][30];
    for (int i = 0; i < qtd_cidades; i++) {
        printf("Informe o nome %iª cidade: ", (i + 1));
        fgets(cidades[i], 30, stdin);
        cidades[i][strcspn(cidades[i], "\n")] = '\0';
    }
    
    // O usuários informa as distâncias as serem calculadas
    float valor;
    float distancias[qtd_cidades][qtd_cidades];
    for (int i = 0; i < qtd_cidades; i++) {
        for (int j = 0; j < qtd_cidades; j++) {
            if(i == j) {
                distancias[i][j] = 0.0;
            } else {
                printf("\n(Caso não tenha rota direta de uma cidade A para uma cidade B. Informe o seguinte valor: -1");
                printf("\nInforme a distância em km de %s para %s: ", cidades[i], cidades[j]);
                scanf("%f", &valor);
                if(valor == -1) {
                    distancias[i][j] = 99999.99;
                } else {
                    distancias[i][j] = valor;
                }
            }
        }  
    }

    limparBufferSistema();

    char decisao;
    while (decisao != 'y' && decisao != 'n') {
        printf("\nDeseja salvar esses dados em um arquivo de texto? (y, n): ");
        scanf(" %c", &decisao);
        limparBufferSistema();

        if(decisao != 'y' && decisao != 'n') {
            printf("\n\nopção inválida!\n");
        }
    }

    decisao = tolower(decisao);

    if (decisao == 'y') {
        salvandoDadosEmArquivoTxt(qtd_cidades, cidades, distancias);
        printf("\nArquivo Salvo com Sucesso!\n");
    }
}

void salvandoDadosEmArquivoTxt(int qtd_cidades, char cidades[][30], float distancias[][qtd_cidades]) {

    // O usuário cria seu nome de arquivo da matriz adjacente
    char nome[100];
    FILE * arquivo_teste;
    char decisao;
    do {
        printf("\nInforme um nome para o arquivo .txt: ");
        fgets(nome, sizeof(nome), stdin);

        nome[strcspn(nome, "\n")] = '\0';

        strcat(nome, ".txt");

        // Testa se nome de arquivo já existe no sistema
        FILE * arquivo_teste = fopen(nome, "r");
        if (arquivo_teste != NULL) {
            fclose(arquivo_teste);
            printf("\nExiste um arquivo com esse nome!");
            while (decisao != 'y' && decisao != 'n') {
                printf("\nDeseja substituir o nome do arquivo? (y, n): ");
                scanf(" %c", &decisao);
                limparBufferSistema();
                decisao = tolower(decisao);
                if (decisao == 'y') {
                    arquivo_teste = NULL;
                }
            }
        }
    } while (arquivo_teste != NULL);

    FILE * arquivo = fopen(nome, "w");

    if(arquivo == NULL) {
        printf("\nErro ao criar o arquivo!");
    }

    // Colocando no arquivo a quantidade de cidades
    fprintf(arquivo, "%i\n", qtd_cidades);

    // Colocando no arquivo os nomes das cidades
    for (int i = 0; i < qtd_cidades; i++) {
        fprintf(arquivo, "%s\n", cidades[i]);
    }

    // Colocando no arquivo as distâncias das cidades
    for (int i = 0; i < qtd_cidades; i++) {
        for (int j = 0; j < qtd_cidades; j++) {
            if (j == (qtd_cidades - 1)) {
                fprintf(arquivo, "%.2f", distancias[i][j]);
            } else {
                fprintf(arquivo, "%.2f;", distancias[i][j]);
            }   
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
}

void salvandoEmArquivoResultadoAlgoritmoFloyd(int qtd_cidades, float matrizDistanciasMinimas[][qtd_cidades], int matrizPredecessores[][qtd_cidades]) {
    FILE * arquivo_resultado = fopen("resultadoAlgoritmoFloydWarshall.txt", "w");

    if(arquivo_resultado == NULL) {
        printf("\nErro ao criar o arquivo!");
    }

    // Adicionando Matriz de Distâncias Mínimas
    fprintf(arquivo_resultado, "%i\n", qtd_cidades);

    for (int i = 0; i < qtd_cidades; i++) {
        for (int j = 0; j < qtd_cidades; j++) {
            if(j == (qtd_cidades - 1)) {
                fprintf(arquivo_resultado, "%.2f", matrizDistanciasMinimas[i][j]);
            } else {
                fprintf(arquivo_resultado, "%.2f;", matrizDistanciasMinimas[i][j]);
            }
        }
        fprintf(arquivo_resultado, "\n");
    }

    for (int i = 0; i < qtd_cidades; i++) {
        for (int j = 0; j < qtd_cidades; j++) {
            if(j == (qtd_cidades - 1)) {
                fprintf(arquivo_resultado, "%i", matrizPredecessores[i][j]);
            } else {
                fprintf(arquivo_resultado, "%i;", matrizPredecessores[i][j]);
            }
        }
        fprintf(arquivo_resultado, "\n");
    }
    fclose(arquivo_resultado);
}