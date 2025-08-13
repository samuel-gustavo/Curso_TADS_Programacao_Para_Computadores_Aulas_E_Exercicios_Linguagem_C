#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define LINHAS 10
#define COLUNAS 10

int main(void) {

    bool sistema_online = true;

    do {

        // Espaçamentos
        for (int i = 0; i < 100; i++){
            printf("\n");
        }

        // Escolha do modo de jogo
        int opcao;

        // Interface do Jogo
        printf("\n================== Jogo de Ache os Binários 1 ==================\n");
        printf("\nModo de jogo 1: Tabuleiro e Jogadores Alternados (Digite 1)");
        printf("\nModo de jogo 2: Jogadores Alternados (Digite 2)");
        printf("\nSair do Sistema (Digite 3)\n");
        printf("\nInforme a opção de jogo que deseja: ");
        scanf("%i", &opcao);

        // Matriz de Visualização do jogador
        int mapa_visualizacao_jogador [LINHAS][COLUNAS];
        // Matriz com os campos do jogo
        int mapa_jogo [LINHAS][COLUNAS];

        // Gerando números aleatórios
        srand(time(NULL));

        // Preenchendo as Matrizes de vizualização do jogador e do próprio jogo
        for (int i = 0; i < LINHAS; i++){
            for (int j = 0; j < COLUNAS; j++) {
                mapa_visualizacao_jogador[i][j] = 2;
                mapa_jogo[i][j] = 0;
            }
        }
        // Fim

        // Gerando os valores de 1 e adicionando aleatóriamente a Matriz
        int linha, coluna, contador = 1;
        while(contador <= 10) {
            linha = rand() % 11;
            coluna = rand() % 11;
        
            if(mapa_jogo[linha][coluna] == 0) {
                mapa_jogo[linha][coluna] = 1;
                contador++;
            } 
        }
        // Fim

        switch (opcao) {
            case 1: {

                // Criando variaveis de controle do modo de jogo 1
                int opc_linha = 0, opc_coluna = 0, contador_acertos_jogador_1 = 0, contador_acertos_jogador_2 = 0, tentativas_jogador_1 = 0, tentativas_jogador_2 = 0;

                // Organizando o Jogo do Primeiro Jogador
                do {
                    // Espaçamentos
                    for (int i = 0; i < 100; i++){
                        printf("\n");
                    }

                    // Modo de Jogo 1
                    printf("\n================== Tabuleiro e Jogadores alternados ==================\n\n");
                    printf("\n--> Jogador 1\n");
                    printf("\n--> Número de tentativas: %i\n", tentativas_jogador_1);
                    printf("\n--> Número de Acertos: %i\n\n", contador_acertos_jogador_1);

                    printf("\n");

                    // Organização da Vizualização do tabuleiro pelo Jogador 1

                    // Vizualização dos números de colunas do tabuleiro
                    for (int i = 0; i <= 9; i++) {
                        if (i == 0) {
                            printf("\033[4;37m \033[0m");
                            printf("|");
                            printf("\033[4;37m%i\033[0m", i); 
                        } else {
                            printf("\033[4;37m|%i\033[0m", i);       
                        }
                    }

                    printf("\n");
                    
                    // Tabuleiro do Jogo
                    for (int i = 0; i < LINHAS; i++){
                        // Organizando Vizualização dos números de linhas do tabuleiro
                        printf("\033[4;37m%i\033[0m", i);       
                        printf("|");

                        for (int j = 0; j < COLUNAS; j++) {
                            if(mapa_visualizacao_jogador[i][j] == 2) {
                                printf("\033[30m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            } else if(mapa_visualizacao_jogador[i][j] == 0) {
                                printf("\033[1;31m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            } else {
                                printf("\033[1;32m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            }
                        }
                        printf("\n");
                    }
                    // Fim

                    // Testando se o Jogador 1 achou os 5 uns
                    if(contador_acertos_jogador_1 == 5) {
                        break;
                    }

                    // Pegando valores das linhas e colunas do jogador
                    printf("\nInforme o número da linha e coluna. Exemplo: (0 1) sem os parênteses: ");
                    scanf("%i %i", &opc_linha, &opc_coluna);

                    // Testando valores da linha e coluna informados pelo jogador
                    if((opc_linha >= 0 && opc_linha <= 9) && (opc_coluna >= 0 && opc_coluna <= 9)) {

                        if(mapa_jogo[opc_linha][opc_coluna] == 1) {
                            contador_acertos_jogador_1++;
                            mapa_visualizacao_jogador[opc_linha][opc_coluna] = 1;

                            // Mudando valor para não se repetir a posição
                            mapa_jogo[opc_linha][opc_coluna] = 2;
                        } else if(mapa_jogo[opc_linha][opc_coluna] == 0) {
                            mapa_visualizacao_jogador[opc_linha][opc_coluna] = 0;

                            // Mudando valor para não se repetir a posição
                            mapa_jogo[opc_linha][opc_coluna] = 2;
                        } else if(mapa_jogo[opc_linha][opc_coluna] == 2) {
                            tentativas_jogador_1--;
                            printf("\n\033[1;31mVocê selecionou uma opção já marcada. Lembre-se de marcar opções que ainda não foram selecionadas que estão com o número (2)\033[0m");
                            printf("\nPrecione Enter para continuar...\n");
                            getchar();
                            getchar();
                        }
                        tentativas_jogador_1++;
                    } else {
                        printf("\n\033[1;31mErro: O valor da linha e coluna deve ser um valor entre 0 e 9\033[0m");
                        printf("\nPrecione Enter para continuar...\n");
                        getchar();
                        getchar();
                    }
                    // Fim

                } while (true);
                
                printf("\n\033[1;34mO jogador 1 achou todos os uns!\033[0m");
                printf("\nTotal de Tentativas: %i \n", tentativas_jogador_1);

                // Pergunta se o jogador deseja continuar com o jogo do jogador 2
                int opcao;
                opcao_invalida:
                printf("\nDeseja continuar com o Segundo Jogador (Sim = 1 e Não = 2): ");
                scanf("%i", &opcao);

                if(opcao != 1 && opcao != 2) {
                    printf("\n\033[1;31mOpção invalida\033[0m\n");
                    goto opcao_invalida;
                } else if(opcao == 2){
                    break;
                }
                // Fim

                // Preenchendo as Matrizes de vizualização do jogador e do próprio jogo para a partida do jogador 2
                for (int i = 0; i < LINHAS; i++){
                    for (int j = 0; j < COLUNAS; j++) {
                        mapa_visualizacao_jogador[i][j] = 2;
                        mapa_jogo[i][j] = 0;
                    }
                }
                // Fim

                // Gerando os valores de 1 e adicionando aleatóriamente a Matriz do tabuleiro do jogador 2
                int linha, coluna, contador = 1;
                while(contador <= 10) {
                    linha = rand() % 11;
                    coluna = rand() % 11;
                
                    if(mapa_jogo[linha][coluna] == 0) {
                        mapa_jogo[linha][coluna] = 1;
                        contador++;
                    } 
                }
                // Fim

                do {
                    // Espaçamentos
                    for (int i = 0; i < 100; i++){
                        printf("\n");
                    }

                    // Modo de Jogo 1
                    printf("\n================== Modo Tabuleiro e Jogadores alternados ==================\n\n");
                    printf("\n\033[1;34mTentativas do (Jogador 1): %i\033[0m\n", tentativas_jogador_1);
                    printf("\n--> Jogador 2\n");
                    printf("\n--> Número de tentativas: %i\n", tentativas_jogador_2);
                    printf("\n--> Número de Acertos: %i\n\n", contador_acertos_jogador_2);

                    printf("\n");

                    // Organização da Vizualização do tabuleiro pelo Jogador 2

                    // Vizualização dos números de colunas do tabuleiro
                    for (int i = 0; i <= 9; i++) {
                        if (i == 0) {
                            printf("\033[4;37m \033[0m");
                            printf("|");
                            printf("\033[4;37m%i\033[0m", i); 
                        } else {
                            printf("\033[4;37m|%i\033[0m", i);       
                        }
                    }
                    
                    printf("\n");
                    
                    // Tabuleiro do Jogo
                    for (int i = 0; i < LINHAS; i++){
                        // Organizando Vizualização dos números de linhas do tabuleiro
                        printf("\033[4;37m%i\033[0m", i);       
                        printf("|");

                        for (int j = 0; j < COLUNAS; j++) {
                            if(mapa_visualizacao_jogador[i][j] == 2) {
                                printf("\033[30m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            } else if(mapa_visualizacao_jogador[i][j] == 0) {
                                printf("\033[1;31m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            } else {
                                printf("\033[1;32m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            }
                        }
                        printf("\n");
                    }
                    // Fim

                    // Testando se o Jogador 2 ultrapassou a quantidade do Jogador 1 ou Achou todos os uns
                    if(tentativas_jogador_1 < tentativas_jogador_2){
                        printf("\n\033[1;32mJogador 1 é o vencendor!\033[0m\n");
                        printf("\n\033[1;32mPor menor quantidade de tentativas\033[0m\n");
                        break;
                    } else if(contador_acertos_jogador_2 == 5 && tentativas_jogador_1 > tentativas_jogador_2) {
                        printf("\n\033[1;32mJogador 2 é o vencendor!\033[0m\n");
                        break;
                    } else if(contador_acertos_jogador_2 == 5 && tentativas_jogador_1 == tentativas_jogador_2) {
                        printf("\n\033[1;30mJogador 1 e Jogador 2 empataram\033[0m\n");
                        break;
                    } else if(contador_acertos_jogador_2 == 5 && tentativas_jogador_1 < tentativas_jogador_2){
                        printf("\n\033[1;30mJogador 1 é o vencedor!\033[0m\n");
                        break;
                    }

                    // Pegando valores das linhas e colunas do jogador
                    printf("\nInforme o número da linha e coluna. Exemplo: (0 1) sem os parênteses: ");
                    scanf("%i %i", &opc_linha, &opc_coluna);

                    // Testando valores da linha e coluna informados pelo jogador
                    if((opc_linha >= 0 && opc_linha <= 9) && (opc_coluna >= 0 && opc_coluna <= 9)) {

                        if(mapa_jogo[opc_linha][opc_coluna] == 1) {
                            contador_acertos_jogador_2++;
                            mapa_visualizacao_jogador[opc_linha][opc_coluna] = 1;

                            // Mudando valor para não se repetir a posição
                            mapa_jogo[opc_linha][opc_coluna] = 2;
                        } else if(mapa_jogo[opc_linha][opc_coluna] == 0) {
                            mapa_visualizacao_jogador[opc_linha][opc_coluna] = 0;

                            // Mudando valor para não se repetir a posição
                            mapa_jogo[opc_linha][opc_coluna] = 2;
                        } else if(mapa_jogo[opc_linha][opc_coluna] == 2) {
                            tentativas_jogador_2--;
                            printf("\n\033[1;31mVocê selecionou uma opção já marcada. Lembre-se de marcar opções que ainda não foram selecionadas que estão com o número (2)\033[0m");
                            printf("\nPrecione Enter para continuar...\n");
                            getchar();
                            getchar();
                        }
                        tentativas_jogador_2++;
                    } else {
                        printf("\n\033[1;31mErro: O valor da linha e coluna deve ser um valor entre 0 e 9\033[0m");
                        printf("\nPrecione Enter para continuar...\n");
                        getchar();
                        getchar();
                    }
                    // Fim
                } while (true);
                
                break;
            }
            case 2: {

                // Criando variaveis de controle para o modo de jogo 2
                int opc_linha = 0, opc_coluna = 0, contador_acertos_jogador_1 = 0, contador_acertos_jogador_2 = 0, contador_tentativas = 0;

                do {
                    // Espaçamentos
                    for (int i = 0; i < 100; i++){
                        printf("\n");
                    }

                    // Modo de Jogo 2
                    printf("\n================== Modo Jogadores alternados ==================\n\n");
                    printf("\n           Jogador 1          |          Jogador 2           \n");
                    printf("\n     contagem de acertos: %i   |     contagem de acertos: %i  \n", contador_acertos_jogador_1, contador_acertos_jogador_2);

                    if(contador_acertos_jogador_1 == 5) {
                        printf("\n\033[1;32m                  Jogador 1 Vencedor! Parabéns!\033[0m\n");
                        printf("\nPrecione Enter para continuar...");
                        getchar();
                        getchar();
                        break;
                    } else if(contador_acertos_jogador_2 == 5) {
                        printf("\n\033[1;32m                  Jogador 2 Vencedor! Parabéns!\033[0m\n");
                        printf("\nPrecione Enter para continuar...");
                        getchar();
                        getchar();
                        break;
                    }

                    // Mostrando quem é o jogador da vez
                    if(contador_tentativas % 2 == 0) {
                        printf("\n\n\033[1;34m                       Rodada: Jogador 1\033[0m\n");
                    } else {
                        printf("\n\n\033[1;34m                       Rodada: Jogador 2\033[0m\n");
                    }

                    printf("\n");

                    // Organização da Vizualização do tabuleiro dos jogadores

                    // Vizualização dos números de colunas do tabuleiro
                    for (int i = 0; i <= 9; i++) {
                        if (i == 0) {
                            printf("\033[4;37m \033[0m");
                            printf("|");
                            printf("\033[4;37m%i\033[0m", i); 
                        } else {
                            printf("\033[4;37m|%i\033[0m", i);       
                        }
                    }
                    
                    printf("\n");
                    
                    // Tabuleiro do Jogo
                    for (int i = 0; i < LINHAS; i++){
                        // Organizando Vizualização dos números de linhas do tabuleiro
                        printf("\033[4;37m%i\033[0m", i);       
                        printf("|");

                        for (int j = 0; j < COLUNAS; j++) {
                            if(mapa_visualizacao_jogador[i][j] == 2) {
                                printf("\033[30m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            } else if(mapa_visualizacao_jogador[i][j] == 0) {
                                printf("\033[1;31m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            } else {
                                printf("\033[1;32m%i \033[0m", mapa_visualizacao_jogador[i][j]);
                            }
                        }
                        printf("\n");
                    }
                    // Fim

                    // Pegando valores das linhas e colunas do jogador
                    printf("\nInforme o número da linha e coluna. Exemplo: (0 1) sem os parênteses: ");
                    scanf("%i %i", &opc_linha, &opc_coluna);

                    // Testando valores da linha e coluna informados pelo jogador
                    if((opc_linha >= 0 && opc_linha <= 9) && (opc_coluna >= 0 && opc_coluna <= 9)) {

                        if(mapa_jogo[opc_linha][opc_coluna] == 1) {
                            if(contador_tentativas % 2 == 0) {
                                contador_acertos_jogador_1++;
                            } else {
                                contador_acertos_jogador_2++;
                            }
                            mapa_visualizacao_jogador[opc_linha][opc_coluna] = 1;

                            // Mudando valor para não se repetir a posição
                            mapa_jogo[opc_linha][opc_coluna] = 2;

                        } else if(mapa_jogo[opc_linha][opc_coluna] == 0) {
                            mapa_visualizacao_jogador[opc_linha][opc_coluna] = 0;

                            // Mudando valor para não se repetir a posição
                            mapa_jogo[opc_linha][opc_coluna] = 2;
                        } else if(mapa_jogo[opc_linha][opc_coluna] == 2) {
                            contador_tentativas--;
                            printf("\n\033[1;31mVocê selecionou uma opção já marcada. Lembre-se de marcar opções que ainda não foram selecionadas que estão com o número (2)\033[0m");
                            printf("\nPrecione Enter para continuar...\n");
                            getchar();
                            getchar();
                        }
                        contador_tentativas++;
                    } else {
                        printf("\n\033[1;31mErro: O valor da linha e coluna deve ser um valor entre 0 e 9\033[0m");
                        printf("\nPrecione Enter para continuar...\n");
                        getchar();
                        getchar();
                    }
                    // Fim

                } while (true);
                
                break;
            }
            case 3:
                sistema_online = false;
                break;
            
            default:
                printf("\n\033[1;31mOpção invalida! Escolha uma das opções informadas\033[0m\n");
                printf("\nPrecione Enter para continuar...\n");
                getchar();
                getchar();
                break;
        }
    } while (sistema_online);
    printf("\nSistema Encerrado!\n");

    return 0;
}



// Ajuda aos jogadores
 /* else {
    int opc_linha_ajuda = opc_linha + 1;
    int opc_coluna_ajuda = opc_coluna + 1;

    for (int i = (opc_linha - 1); i < opc_linha_ajuda; i++) {
        for (int j = (opc_coluna - 1); j < opc_coluna_ajuda; j++) {
            if(mapa_jogo[i][j] == 1) {
                printf("\nExiste um 1 aqui perto");
                goto sair_do_laco;
            }
        } 
    }

    sair_do_laco:
}*/

// Mostrando tabuleiro do jogo com os valores certos
    // for (int i = 0; i < LINHAS; i++){
    //     for (int j = 0; j < COLUNAS; j++) {
    //         if(mapa_jogo[i][j] == 2) {
    //             printf("\033[30m%i \033[0m", mapa_jogo[i][j]);
    //         } else if(mapa_jogo[i][j] == 0) {
    //             printf("\033[31m%i \033[0m", mapa_jogo[i][j]);
    //         } else {
    //             printf("\033[32m%i \033[0m", mapa_jogo[i][j]);
    //         }
    //     }
    //     printf("\n");
    // }
// Fim