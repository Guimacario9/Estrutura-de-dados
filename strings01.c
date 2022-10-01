#include <stdio.h>
#include <string.h>

/* faz o mesmo que strlen() */
int tamanho ( char s[30] ) {
   int j ;
   for ( j=0; s[j] != '\0' ; j++);
   return j ;
}

/* faz o mesmo que puts() */
void mostra( char n[30] ) {
   int i ;
   printf("\n");
   for ( i=0 ; i < tamanho(n) ; i++ )
       printf("%c",n[i]);
   printf("\n");
}

int main ( void ) {
   char nome[30], nome2[30] ;
   strcpy( nome, "Atencao para o 17 de marco !");
   strcpy( nome2, nome);
   mostra(nome2) ; 
   return 0;
}





