#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


int main();
void insere (struct no *&praiz, struct no *novo);
void emordem (struct no *raiz);
void preordem (struct no *raiz);
void posordem (struct no *raiz);
int pesquisa (struct no *aux1, int itemaux);
void remove (struct no *&aux1);

struct no
{
int item;
struct no *esq, *dir;
};
struct no *raiz, *aux1, *aux2;


int main()
{
char c, op = '1', auxitem[3];
int achou;


raiz = (struct no*) NULL; // inicializa a arvore vazia
while (op != '0')
{

puts(" 	 Arvores Binarias de Busca  ");
puts("1. Inserir Elemento na Arvore");
puts("2. Consultar Elemento na Arvore");
puts("3. Remover Elemento da Arvore");

puts("4. Mostrar Arvore em Pre - Ordem");
puts("5. Mostrar Arvore em In - Ordem");
puts("6. Mostrar Arvore em Pos - Ordem");

puts("0. Sair");
printf("Digite sua opcao: ");
op = getche();

switch(op)
{
case '1': // insere
{
aux1 = (struct no *) malloc(sizeof(struct no));
printf("\n\nDigite Elemento a ser inserido: ");
gets(auxitem);
aux1->item = atoi(auxitem);
aux1->esq = aux1->dir = (struct no*) NULL;
if (raiz == (struct no *) NULL)
raiz = aux1;
else
{
aux2 = raiz;
insere(aux2, aux1);
}
}
break;

case '2': // consulta
{
if (raiz == (struct no *) NULL)
printf("\n\nElemento Não Encontrado. Arvore vazia !");
else
{
printf("\n\nDigite Elemento a ser pesquisado: ");
gets(auxitem);
achou = pesquisa(raiz, (atoi(auxitem)));
if (achou)
puts("Achou !");
else
puts ("Nao achou !");
}
}
break;

case '3': // remove
{
if (raiz == (struct no *) NULL)
printf("\n\nNão Foi Possível Remover. A arvore vazia !");
else
{
printf("\n\nDigite Elemento a ser removido: ");
gets(auxitem);
achou = pesquisa(raiz, (atoi(auxitem)));
if (!achou)
puts("Não Foi Possível Remover. O elemento nao existe na arvore !");
else // acha o endereco a ser modificado e passa p/ a funcao remove
{
if (raiz->item == atoi(auxitem)) // remove o nó que estah
remove(raiz); // ocupando a raiz da arvore
else
{
aux1 = raiz;
while((aux1->dir->item != atoi(auxitem)) && (aux1->esq->item != atoi(auxitem)))
{
if (atoi(auxitem) <= aux1->item)
aux1 = aux1->esq;
else
aux1 = aux1->dir;
} // while
if (aux1->dir->item == atoi(auxitem))
remove(aux1->dir);
else
remove(aux1->esq);
} // else if raiz->item == auxitem
} // else if !achou
} // else if raiz == NULL
} // case '3'
break;

case '4': // imprime em pre ordem
{
printf("\n\nMostrar em Pre - Ordem: ");
preordem(raiz);
}
break;

case '5': // imprime In - Ordem (central)
{
printf("\n\nMostrar em In - Ordem: ");
emordem(raiz);
}
break;

case '6': //Mostrar em Pos - Ordem
{
printf("\n\nImprimindo os componentes em pos-ordem: ");
posordem(raiz);
}
break;

case '0': break;

default : puts("\nOpcao invalida");
} /* switch */
puts("\nPressione <ENTER> para continuar");
while ((c = getchar()) != '\n');
} /* while */
} /* funcao main () */

void insere (struct no *&praiz, struct no *novo)
{
if (praiz == (struct no *) NULL)
praiz = novo;
else
{
if (novo->item <= praiz->item)
insere(praiz->esq, novo);
else
insere(praiz->dir, novo);
}
}

int pesquisa (struct no *aux1, int itemaux)
{
if (aux1 == (struct no *) NULL) // nao achou
return(0);
if (aux1->item == itemaux) // achou
return(1);
if (itemaux <= aux1->item)
pesquisa(aux1->esq, itemaux);
else
pesquisa(aux1->dir, itemaux);
} /* funcao pesquisa */

void remove (struct no *&aux1)
{
struct no *temp;

if (aux1->dir == (struct no *) NULL)
{
temp = aux1;
aux1 = aux1->esq;
free(temp);
}
else
if (aux1->esq == (struct no *) NULL)
{
temp = aux1;
aux1 = aux1->dir;
free(temp);
}
else // ambas as subarvores do nó a ser removido estao ocupadas
{
temp = aux1->dir;

while (temp->esq != (struct no *) NULL) // acha a posicao mais a
temp = temp->esq; // esquerda possivel na
// subarvore da direita

temp->esq = aux1->esq; // liga esta posicao com a subarvore
// esquerda do nó a ser removido
temp = aux1;
aux1 = aux1->dir; // faz a subarvore da direita assumir o lugar do
// nó a ser removido
free(temp);
}
} 


/* funcao remove */

void inordem (struct no *raiz)
{
if (raiz != (struct no *) NULL)
{
inordem(raiz->esq);
printf("%d ", raiz->item);
inordem(raiz->dir);
}
}

void preordem (struct no *raiz)
{
if (raiz != (struct no *) NULL)
{
printf("%d ", raiz->item);
preordem(raiz->esq);
preordem(raiz->dir);
}
}

void posordem (struct no *raiz)
{
if (raiz != (struct no *) NULL)

{
posordem(raiz->esq);
posordem(raiz->dir);
printf("%d ", raiz->item);
}
}
