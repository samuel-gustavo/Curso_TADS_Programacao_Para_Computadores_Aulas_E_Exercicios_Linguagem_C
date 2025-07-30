#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE * arquivo = NULL; // ponteiro nulo
    int qtd_cidades = 5;

    char cidades[][40] = {
        "Nova Cruz",
        "Serrinha",
        "Santo Antônio",
        "Monte Alegre",
        "Passa e Fica"
    };

    arquivo = fopen("teste_escrita.txt", "w");

    if(arquivo != NULL) {
        printf(" ** Arquivo aberto com sucesso!");
        // operações
        fprintf(arquivo, "%s", "Meu primeiro arquivo escrito");
        fprintf(arquivo, "%s", "\nOlá Mundo!");
        fprintf(arquivo, "\n%i", qtd_cidades);

        for (int i = 0; i < 5; i++) {
            fprintf(arquivo, "\n%s", cidades[i]);
        }
        

        fclose(arquivo);
    }

    return 0;
}