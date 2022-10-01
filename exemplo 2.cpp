#include<stdio.h>
#include<string.h>
int main (void){
	char nome[30] ;
	int i;
	strcpy(nome,"Atencao para o 15 de marco !");
	printf("\n");
	for (i=0;i<strlen(nome);i++)
	printf("\n%c\n",nome[i]);
	printf("\n");
	return 0; 
}
