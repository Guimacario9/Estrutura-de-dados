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


int main() {
     Musica *primeiro, *aux, *ultimo;
     primeiro = NULL;
        
     aux=(Musica *)malloc(sizeof(Musica));
     strcpy(aux->nome,"Nbote na yo");
     strcpy(aux->interprete,"MC Saddan");
     aux->proximo = NULL;
     primeiro=aux;
     ultimo = aux;
     
     aux=(Musica *)malloc(sizeof(Musica));
     strcpy(aux->nome,"Ngue nani");
     strcpy(aux->interprete,"MC Saddan");
     aux->proximo = NULL;
     ultimo->proximo=(struct Musica *)aux;
     ultimo = aux;
     
     aux=(Musica *)malloc(sizeof(Musica));
     strcpy(aux->nome,"Tua Pandula");
     strcpy(aux->interprete,"DJ Pyzy");
     aux->proximo = NULL;
     ultimo->proximo=(struct Musica *)aux;
     ultimo = aux;
     
     listar(primeiro);
     system("PAUSE");
     return 0;
}
