#include <stdio.h>
#define MAX 9

int v[MAX] = { 12, 13, 66, 45, 61, 3, 17, 44, 78 } ;

void mostra(char * msg) {
   int i ;
   printf("\n%s\n", msg);
   /* para declarar o contador dentro do for, compilar com -std=c99 */
   for (i=0; i < MAX ; i++) 
	printf("\t%d\t", v[i]);
   printf("\n");
}

void reinicializa() {
	int aux[MAX] = { 12, 13, 66, 45, 61, 3, 17, 44, 78 } ;
	int i ;
	for (i=0; i <= MAX ; i++) 
		v[i] = aux[i] ;
	
}

void troque ( int * a , int * b ) {
	int auxiliar ;
	auxiliar = *a ;
	*a = *b ;
	*b = auxiliar ;
}

void bub0 () {
	int i, j ;
	for (i=0; i <= MAX -2; i++ )
		for (j=0; j <= MAX -2; j++ )
			if ( v[j] > v[j+1])  troque(&v[j], &v[j+1]) ;
}

void bub1 () {
	int lsup, i ;
	lsup = MAX -1 ;
	while ( lsup > 0 ) {
	   for ( i=0 ; i < lsup ; i++ )
			if ( v[i] > v[i+1])  troque(&v[i], &v[i+1]) ;
	   lsup-- ;
	}
}

void bub2 () {
	int lsup, i, bolha ;
	lsup = MAX -1 ;
	bolha = -1 ;
	while ( lsup > 0 ) {
	   for ( i=0 ; i < lsup ; i++ )
			if ( v[i] > v[i+1]) {
				troque(&v[i], &v[i+1]) ;
				bolha = i ;
			}
	   lsup = bolha ;
	}
}

int main (void) {
	mostra("Vetor original") ;
	bub0() ;
	mostra("Vetor classificado, bubble-sort simples") ;

	reinicializa() ;
	mostra("Vetor original, recuperado") ;
	bub1() ;
	mostra("Vetor classificado, bubble-sort modificado") ;

	reinicializa() ;
	mostra("Vetor original, recuperado") ;
	bub2() ;
	mostra("Vetor classificado, bubble-sort melhorado") ;

}

