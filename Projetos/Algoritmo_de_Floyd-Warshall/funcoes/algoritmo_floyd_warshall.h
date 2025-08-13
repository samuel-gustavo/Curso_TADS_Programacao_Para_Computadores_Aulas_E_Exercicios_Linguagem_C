#ifndef ALGORITMO_FLOYD
#define ALGORITMO_FLOYD

#define QTD_MAX_CIDADES 200

void funcMatrizDistanciasMinimas(int qtd_cidades, float distancias[QTD_MAX_CIDADES][QTD_MAX_CIDADES], float matrizDistanciasMinimas[QTD_MAX_CIDADES][QTD_MAX_CIDADES]);

void funcMatrizPredecessores(int qtd_cidades, float distancias[QTD_MAX_CIDADES][QTD_MAX_CIDADES], int matrizPredecessores[QTD_MAX_CIDADES][QTD_MAX_CIDADES]);

void escolhaMostrarResultadoMatrizesOuRealizarPesquisa(int qtd_cidades, char cidades[][30], float matrizDistanciasMinimas[QTD_MAX_CIDADES][QTD_MAX_CIDADES], int matrizPredecessores[QTD_MAX_CIDADES][QTD_MAX_CIDADES]);

void salvandoEmArquivoResultadoAlgoritmoFloyd(int qtd_cidades, float matrizDistanciasMinimas[QTD_MAX_CIDADES][QTD_MAX_CIDADES], int matrizPredecessores[QTD_MAX_CIDADES][QTD_MAX_CIDADES]);

void algoritmo_floyd(int qtd_cidades, char cidades[][30], float distancias[QTD_MAX_CIDADES][QTD_MAX_CIDADES], float matrizDistanciasMinimas[QTD_MAX_CIDADES][QTD_MAX_CIDADES], int matrizPredecessores[QTD_MAX_CIDADES][QTD_MAX_CIDADES]);


#endif