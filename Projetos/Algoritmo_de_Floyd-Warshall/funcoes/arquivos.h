#ifndef FUNCOES_ARQUIVOS
#define FUNCOES_ARQUIVOS

#define QTD_MAX_CIDADES 200

int confirmandoCaminhoEFormatoArquivo(const char * caminho);

void lerArquivoTxt(const char * caminho);

void matrizAdjacencias();

void salvandoDadosEmArquivoTxt(int qtd_cidades, char cidades[][30], float distancias[][QTD_MAX_CIDADES]);

#endif