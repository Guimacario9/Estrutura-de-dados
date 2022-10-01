#include <stdio.h>
#include <string.h>
void mostra (char n [30]) {
	if ( n[0] != '\0') {
		printf("%c", n[0]) ;
		mostra(n+1) ;
	}
}


int main() {
	char nome[30] ;
	puts("Informe nome : ") ;
	scanf("%s", nome) ;
	mostra(nome) ;
	return 0 ;
}
