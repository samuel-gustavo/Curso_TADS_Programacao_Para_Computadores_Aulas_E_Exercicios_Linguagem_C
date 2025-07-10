// Samuel Gustavo Lima da Silva
// Maria de Fátima Almeida Linhares de Oliveira

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    char nome_competidor_1[100], nome_competidor_2[100], nome_competidor_3[100];
    char minutos_cp1[10], segundos_cp1[10], centesimos_cp1[10], ch_tempo_completo_cp1[30],
          minutos_cp2[10], segundos_cp2[10], centesimos_cp2[10], ch_tempo_completo_cp2[30],
          minutos_cp3[10], segundos_cp3[10], centesimos_cp3[10], ch_tempo_completo_cp3[30];

    int int_tempo_completo_cp1, int_tempo_completo_cp2, int_tempo_completo_cp3,
        int_tempo_mundial = 143067;
    
    printf("--> Torneio de Natação <--\n\n");

    printf("Informe o nome do 1° competidor: ");
    fgets(nome_competidor_1, sizeof(nome_competidor_1 ), stdin);
    nome_competidor_1[strcspn(nome_competidor_1, "\n")] = '\0';

    printf("\nInforme o nome do 2° competidor: ");
    fgets(nome_competidor_2, sizeof(nome_competidor_2), stdin);
    nome_competidor_2[strcspn(nome_competidor_2, "\n")] = '\0';

    printf("\nInforme o nome do 3° competidor: ");
    fgets(nome_competidor_3, sizeof(nome_competidor_3), stdin);
    nome_competidor_3[strcspn(nome_competidor_3, "\n")] = '\0';

    // Competidor 1
    {
        printf("\nInforme o tempo do competidor (%s)\n", nome_competidor_1);
        printf("Minutos: ");
        fgets(minutos_cp1, sizeof(minutos_cp1 ), stdin);
        minutos_cp1[strcspn(minutos_cp1, "\n")] = '\0';
        printf("\nSegundos: ");
        fgets(segundos_cp1, sizeof(segundos_cp1 ), stdin);
        segundos_cp1[strcspn(segundos_cp1, "\n")] = '\0';
        printf("\nCentésimos: ");
        fgets(centesimos_cp1, sizeof(centesimos_cp1 ), stdin);
        centesimos_cp1[strcspn(centesimos_cp1, "\n")] = '\0';
        
        strcpy(ch_tempo_completo_cp1, minutos_cp1);
        strcat(ch_tempo_completo_cp1, segundos_cp1);
        strcat(ch_tempo_completo_cp1, centesimos_cp1);

        int_tempo_completo_cp1 = (int) atoi(ch_tempo_completo_cp1);
    }

    // Competidor 2
    {
        printf("\nInforme o tempo do competidor (%s)\n", nome_competidor_2);
        printf("Minutos: ");
        fgets(minutos_cp2, sizeof(minutos_cp2 ), stdin);
        minutos_cp2[strcspn(minutos_cp2, "\n")] = '\0';
        printf("\nSegundos: ");
        fgets(segundos_cp2, sizeof(segundos_cp2 ), stdin);
        segundos_cp2[strcspn(segundos_cp2, "\n")] = '\0';
        printf("\nCentésimos: ");
        fgets(centesimos_cp2, sizeof(centesimos_cp2 ), stdin);
        centesimos_cp2[strcspn(centesimos_cp2, "\n")] = '\0';
        
        strcpy(ch_tempo_completo_cp2, minutos_cp2);
        strcat(ch_tempo_completo_cp2, segundos_cp2);
        strcat(ch_tempo_completo_cp2, centesimos_cp2);


        int_tempo_completo_cp2 = (int) atoi(ch_tempo_completo_cp2);
    }

    // Competidor 3
    {
        printf("\nInforme o tempo do competidor (%s)\n", nome_competidor_3);
        printf("Minutos: ");
        fgets(minutos_cp3, sizeof(minutos_cp3 ), stdin);
        minutos_cp3[strcspn(minutos_cp3, "\n")] = '\0';
        printf("\nSegundos: ");
        fgets(segundos_cp3, sizeof(segundos_cp3 ), stdin);
        segundos_cp3[strcspn(segundos_cp3, "\n")] = '\0';
        printf("\nCentésimos: ");
        fgets(centesimos_cp3, sizeof(centesimos_cp3 ), stdin);
        centesimos_cp3[strcspn(centesimos_cp3, "\n")] = '\0';
        
        strcpy(ch_tempo_completo_cp3, minutos_cp3);
        strcat(ch_tempo_completo_cp3, segundos_cp3);
        strcat(ch_tempo_completo_cp3, centesimos_cp3);

        int_tempo_completo_cp3 = (int) atoi(ch_tempo_completo_cp3);
    }


    if ((int_tempo_mundial > int_tempo_completo_cp1) || (int_tempo_mundial > int_tempo_completo_cp2) || (int_tempo_mundial > int_tempo_completo_cp3)){
        printf("\n\n--> Recorde Mundial Batido! <--\n");
    }
    

    if((int_tempo_completo_cp1 <= int_tempo_completo_cp2) && (int_tempo_completo_cp1 <= int_tempo_completo_cp3)) {
        
        if(int_tempo_completo_cp1 == int_tempo_completo_cp2) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
        } else if (int_tempo_completo_cp1 == int_tempo_completo_cp3) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
        } else if(int_tempo_completo_cp2 < int_tempo_completo_cp3) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
        } else {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
        }

    } else if((int_tempo_completo_cp2 <= int_tempo_completo_cp1) && (int_tempo_completo_cp2 <= int_tempo_completo_cp3)) {
        
        if(int_tempo_completo_cp2 == int_tempo_completo_cp1) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
        } else if (int_tempo_completo_cp2 == int_tempo_completo_cp3) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
        } else if(int_tempo_completo_cp1 < int_tempo_completo_cp3) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
        } else {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
        }

    } else {

        if(int_tempo_completo_cp3 == int_tempo_completo_cp1) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
        } else if (int_tempo_completo_cp3 == int_tempo_completo_cp2) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
        } else if(int_tempo_completo_cp1 < int_tempo_completo_cp2) {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
        } else {
            printf("\n1° %s --> %s:%s.%s", nome_competidor_3, minutos_cp3, segundos_cp3 , centesimos_cp3);
            printf("\n2° %s --> %s:%s.%s", nome_competidor_2, minutos_cp2, segundos_cp2 , centesimos_cp2);
            printf("\n3° %s --> %s:%s.%s", nome_competidor_1, minutos_cp1, segundos_cp1 , centesimos_cp1);
        }
    }
    printf("\n");
    return 0;
}