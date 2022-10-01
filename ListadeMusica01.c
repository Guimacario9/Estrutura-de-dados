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

int main() {
     Musica *primeiro, *ultimo;
     primeiro = NULL;
     Musica aux;
     
     strcpy(aux.nome,"Hoje agora");
     strcpy(aux.interprete,"Santana");
     aux.proximo = NULL;
     inserir(&primeiro,aux);
     
     strcpy(aux.nome,"Hora de aprender");
     strcpy(aux.interprete,"Santana");
     aux.proximo = NULL;
     inserir(&primeiro,aux);
     
     listar(primeiro);
     system("PAUSE");
     return 0;
}
