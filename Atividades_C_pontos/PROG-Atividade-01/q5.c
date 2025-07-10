// Samuel Gustavo Lima da Silva
// Maria de Fátima Almeida Linhares de Oliveira

#include <stdio.h>

int main(void) {

    int valor_calorico = 0, opcao;

    printf("--> Calculando valor Calorico <--\n\n");

    printf("--> Pratos <--\n");
    printf("\n1- Vegetariano");
    printf("\n2- Peixe");
    printf("\n3- Frango");
    printf("\n4- Carne\n");
    printf("\nSelecione a opção para seu Prato: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        valor_calorico += 180;
        break;
    case 2:
        valor_calorico += 230;
        break;
    case 3:
        valor_calorico += 250;
        break;
    case 4:
        valor_calorico += 350;
        break;
    default:
        break;
    }

    printf("\n\n--> Sobremesas <--\n");
    printf("\n1- Abacaxi");
    printf("\n2- Sorvete Diet");
    printf("\n3- Mousse Diet");
    printf("\n4- Mousse Chocalate\n");
    printf("\nSelecione a opção para sua Sobremesa: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        valor_calorico += 75;
        break;
    case 2:
        valor_calorico += 110;
        break;
    case 3:
        valor_calorico += 170;
        break;
    case 4:
        valor_calorico += 200;
        break;
    default:
        break;
    }

    printf("\n\n--> Bebidas <--\n");
    printf("\n1- Chá");
    printf("\n2- Suco de Laranja");
    printf("\n3- Suco de Melão");
    printf("\n4- Refrigerante Diet\n");
    printf("\nSelecione a opção para sua bebida: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        valor_calorico += 30;
        break;
    case 2:
        valor_calorico += 70;
        break;
    case 3:
        valor_calorico += 100;
        break;
    case 4:
        valor_calorico += 65;
        break;
    default:
        break;
    }

    printf("\nValor Calorico da refeição: %i cal\n", valor_calorico);
    return 0;
}