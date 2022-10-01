#include <stdio.h>
#include <malloc.h>

typedef struct {
  char info ;
  struct No * esq ;
  struct No * dir ;
} No ;


void insert ( No * * t , char letra ) {
  if ( *t == NULL ) {
	*t = ( No * ) malloc ( sizeof ( No ) ) ;
	(*t)->info = letra ;
	(*t)->esq = NULL ;
	(*t)->dir = NULL ;
	}
  else
	if ( letra > (*t)->info )
		insert ( (No **)  &(*t)->dir, letra ) ;
	else
		if ( letra < (*t)->info )
			insert ( (No **) &(*t)->esq, letra ) ;
}


void ordem ( No * t ) {
	if ( t != NULL ) {
		ordem ( (No *) t->esq ) ;
		printf("[%c] \t", t->info);
		ordem ( (No *) t->dir ) ;
	}
}

void preOrdem ( No * t ) {
	if(pRaiz != NULL){
        printf("\n%i", pRaiz->numero);
        exibirPreOrdem(pRaiz->esquerda);
        exibirPreOrdem(pRaiz->direita);
    }  
}

void posOrdem ( No * t ) {
	if(pRaiz != NULL){
        exibirPosOrdem(pRaiz->esquerda);
        exibirPosOrdem(pRaiz->direita);
        printf("\n%i", pRaiz->numero);
    }
}



int qtdNos ( No * t ) {
  	if(pRaiz == NULL)
        return 0;
   else
        return 1 + contarNos(pRaiz->esquerda) + contarNos(pRaiz->direita);
}




void pesquisa (  No * t,      char letraProcurada, No * *onde ) { 
  	// PARA VOCÊ TERMINAR
 }



int main ( void ) {
	No * goiabeira = NULL    ;
	No * onde_estah ;

	insert ( &goiabeira , 'A') ;
	insert ( &goiabeira , 'D') ;
	insert ( &goiabeira , 'C') ;
	insert ( &goiabeira , 'F') ;
	insert ( &goiabeira , 'B') ;
	insert ( &goiabeira , 'G') ;
	insert ( &goiabeira , 'E') ;
	insert ( &goiabeira , 'M') ;
	insert ( &goiabeira , 'N') ;
	insert ( &goiabeira , 'H') ;

	ordem ( goiabeira ) ;

	printf("\n\nQuantidade de nós = %d\n\n", qtdNos ( goiabeira ) ) ;

	onde_estah = NULL ;

	pesquisa ( goiabeira, 'H', &onde_estah) ;
	if ( onde_estah != NULL )
		printf("\nEncontrado = %c \n\n", onde_estah->info) ;

}

