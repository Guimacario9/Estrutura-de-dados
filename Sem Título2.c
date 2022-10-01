#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_GRUPO 4

struct selecao {
    char time[100];
    int pontos;
    int gols_favor;
    int gols_contra;
    int gols_total;
};

int main()
{
    struct selecao grupo_a[4];    //grupo a montado
    char jogo_copa[64][200];    //total de jogos da copa
    int i = 0, j = 1, h = 0;
    char entrada[30];

    printf("PROGRAMA COPA DO MUNDO 2010.\n");

    for (i = 0; i < MAX_GRUPO; i++) {    //GRUPO A
        printf("Digite o nome da seleção pertencente ao GRUPO A.\n");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strlen(entrada)-1] = '\ 0'; // só pra tirar a quebra de linha da string
        strcpy(grupo_a[i].time, entrada);
    }

    printf("\n\n");
    
    for (h = 0; h < 7; h++)    // cada grupo tem 6 jogos
    {
        for (i = 0; i < 3; i++)    //quantidade de jogos de modo que não repita
        {
            for (j = 1; j < 4; j++)    //quantidade de adversários
            {
                strcpy(jogo_copa[h], grupo_a[i].time);
                strcat(jogo_copa[h], " vs ");
                strcat(jogo_copa[h], grupo_a[j].time);
                printf("jogo[%d] = %s\n", h, jogo_copa[h]);
                h++;

            }
        }
    }

    return 0;
}
