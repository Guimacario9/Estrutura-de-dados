/*
Apresenta��o: Este programa apresenta a ideia de uma
              lista encadeada.
Disciplina: Estruturas de Dados
Autor: Santana e Mbangi
Data: 14/05/2015

A fazer:
        -fun��o de busca por musica
        -fun��o de busca por interprete
        -Fun��o para inserir no in�cio.
        -Fun��o para eliminar o ultimo.
        -Fun��o para eliminar o primeiro.
        -Fun��o para eliminar um determinado n� do meio.
        -Alterar a fun��o inserir para inserir na
        ordem por nome.
A corrigir:
        -O scanf da fun��o preencher para no primeiro
        espa�o, impedindo strings com mais de uma palavra.
        Pesquisar o uso de express�es regulares na scanf.
Ideias:
        -Usar este programa para implementar
        uma LISTA TELEF�NICA.
*/

#include <stdio.h>
#include <malloc.h>

typedef struct{
        char nome[20];
        char interprete[20];
        struct Musica *proximo;
} Musica ;

void listar(Musica *wprime){
     Musica *p;
     p=wprime;  
     
     printf("\n\n\n");
     while(p!=NULL){
         printf("\nNome: %s   Interprete: %s\n", p->nome, p->interprete);
         p = (Musica *)p->proximo;
     }        
     printf("\n\n\n");
     system("pause");
}

void inserir(Musica **wprimeiro, Musica novo){
     Musica *ultimo, *j, *aux;
     j = *wprimeiro;
     ultimo = *wprimeiro;
     
     while(j!=NULL){
          ultimo = j;
          j = (Musica *)j->proximo;
     }
     aux = (Musica *)malloc(sizeof(Musica));
     *aux = novo;
     if(*wprimeiro==NULL)
         *wprimeiro = aux;
     else
          ultimo->proximo = (struct Musica *)aux ;
}

void preencher(Musica *musica){
     printf("\nNome da musica: ");
     scanf("%s", musica->nome);
     printf("\nNome do Interprete: ");
     scanf("%s", musica->interprete);
     musica->proximo = NULL;
}

void preencher_e_inserir(Musica **pprimeiro){
     Musica aux;
     preencher(&aux);
     inserir(pprimeiro,aux);
}

int menu(){
     int op;
     system("cls");
     printf("\n----------------------");
     printf("\n 1.Inserir");
     printf("\n 2.Listar");
     printf("\n 0.Sair");
     printf("\n----------------------");
     printf("\n\n\n\n");
     scanf("%d",&op);
     return op;
}

int main(){
     int opcao;
     Musica *primeiro;
     primeiro = NULL;
     
     opcao = menu();
     while(opcao!=0){
        switch (opcao){
            case 1:
                 preencher_e_inserir(&primeiro);
                 break;
            case 2:
                 listar(primeiro);
                 break;
        }
        opcao = menu();
     }   
     
     system("PAUSE");
     return 0;
}
