#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "algoritmo_floyd_warshall.h"
#include "tratamento_entrada_dados.h"

void algoritmo_floyd(int qtd_cidades, char cidades[][30], float distancias[][qtd_cidades], float matrizDistanciasMinimas[][qtd_cidades], int matrizPredecessores[][qtd_cidades]) {
    funcMatrizDistanciasMinimas(qtd_cidades, distancias, matrizDistanciasMinimas);
    funcMatrizPredecessores(qtd_cidades, distancias, matrizPredecessores);

    for (int k = 0; k < qtd_cidades; k++) {
        for (int i = 0; i < qtd_cidades; i++) {
            for (int j = 0; j < qtd_cidades; j++) {
                if((matrizDistanciasMinimas[i][k] + matrizDistanciasMinimas[k][j]) < matrizDistanciasMinimas[i][j]) {
                    matrizDistanciasMinimas[i][j] = matrizDistanciasMinimas[i][k] + matrizDistanciasMinimas[k][j];
                    matrizPredecessores[i][j] = matrizPredecessores[k][j];
                }
            }
        }
    }

    escolhaMostrarResultadoMatrizesOuRealizarPesquisa(qtd_cidades, cidades, matrizDistanciasMinimas, matrizPredecessores);
}

void funcMatrizDistanciasMinimas(int qtd_cidades, float distancias[][qtd_cidades], float matrizDistanciasMinimas[][qtd_cidades]) {
    for (int i = 0; i < qtd_cidades; i++) {
        for (int j = 0; j < qtd_cidades; j++) {
            matrizDistanciasMinimas[i][j] = distancias[i][j];
        }
    } 
}

void funcMatrizPredecessores(int qtd_cidades, float distancias[][qtd_cidades], int matrizPredecessores[][qtd_cidades]) {
    for (int i = 0; i < qtd_cidades; i++) {
        for (int j = 0; j < qtd_cidades; j++) {
            if (fabs(distancias[i][j] - 99999.99) < 0.01) {
                matrizPredecessores[i][j] = -1;
            } else {
                matrizPredecessores[i][j] = i;
            }
        }
    }
}

void escolhaMostrarResultadoMatrizesOuRealizarPesquisa(int qtd_cidades, char cidades[][30], float matrizDistanciasMinimas[][qtd_cidades], int matrizPredecessores[][qtd_cidades]) {
    int opcao;

    while (opcao != 4) {
        printf("\n============ Algoritmo Executado ============\n");
        printf("1- Mostrar Matriz de Distâncias Mínimas\n");
        printf("2- Mostrar Matriz de Predecessores\n");
        printf("3- Verificar distâncias entre Municípios\n");
        printf("4- Sair\n\n");
        printf("Escolha um das opções a cima: ");
        scanf("%i", &opcao);

        printf("\n");
        switch (opcao) {
            case 1: {
                printf("Matriz de Distâncias Mínimas:\n\n");
                for (int i = 0; i < qtd_cidades; i++) {
                    for (int j = 0; j < qtd_cidades; j++) {
                        if (j == (qtd_cidades - 1)) {
                            printf("%.2f", matrizDistanciasMinimas[i][j]);
                        } else {
                            printf("%.2f;", matrizDistanciasMinimas[i][j]);
                        }
                    }
                    printf("\n");
                } 
                break;
            }
            case 2: {
                printf("Matriz de Distâncias Predecessores:\n\n");
                for (int i = 0; i < qtd_cidades; i++) {
                    for (int j = 0; j < qtd_cidades; j++) {
                        if (j == (qtd_cidades - 1)) {
                            printf("%i", matrizPredecessores[i][j]);
                        } else {
                            printf("%i;", matrizPredecessores[i][j]);
                        }
                    }
                    printf("\n");
                } 
                break;
            }
            case 3: {
                int origem = -1, destino = -1;
                int valorMatrizPredecessor;
                float valorMatrizDistanciaMinima;

                for (int i = 0; i < qtd_cidades; i++) {
                    printf("%i- %s\n", i, cidades[i]);
                }
                
                while (origem < 0 || origem > (qtd_cidades - 1)) {
                    printf("\nInforme a opção da cidade de origem: ");
                    scanf("%i", &origem);
                    
                    if(origem < 0 || origem > (qtd_cidades - 1)) {
                        printf("\nOpção inválida para a cidade de origem!\n");
                    }
                }

                while (destino < 0 || destino > (qtd_cidades - 1)) {
                    printf("\nInforme a opção da cidade de destino: ");
                    scanf("%i", &destino);
                    
                    if(destino < 0 || destino > (qtd_cidades - 1)) {
                        printf("\nOpção inválida para a cidade de destino!\n");
                    }
                }

                printf("\n");

                int caminho[qtd_cidades];
                int index = 0;
                int atual = destino;

                // Enquanto não chegar à origem
                while (atual != origem) {
                    caminho[index++] = atual;
                    atual = matrizPredecessores[origem][atual];
                }
                caminho[index++] = origem;

                // Imprimir o caminho na ordem correta (origem → destino)
                printf("Caminho de %s até %s:\n\n", cidades[origem], cidades[destino]);
                for (int i = index - 1; i >= 0; i--) {
                    printf("%s", cidades[caminho[i]]);
                    if (i > 0) {
                        printf(" → ");
                    }
                }
                
                printf("\n"); 
                
                valorMatrizDistanciaMinima = matrizDistanciasMinimas[origem][destino];
                printf("\nDistância de %.1fkm\n", valorMatrizDistanciaMinima);
                
                break;
            }

            case 4: {
                printf("\nSaindo...\n");
                break;
            }
                    
            default:
                printf("\nOpção Inválida!\n");
                break;
        }
    }
    
}