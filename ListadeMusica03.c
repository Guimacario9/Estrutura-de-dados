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
     
     while(p!=NULL){
         printf("\nNome: %s   Interprete: %s\n", p->nome, p->interprete);
         p = (Musica *)p->proximo;
     }        
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

int main(){
     Musica *primeiro;
     primeiro = NULL;

     preencher_e_inserir(&primeiro);
     preencher_e_inserir(&primeiro);
     preencher_e_inserir(&primeiro);
     
     listar(primeiro);
     system("PAUSE");
     return 0;
}
