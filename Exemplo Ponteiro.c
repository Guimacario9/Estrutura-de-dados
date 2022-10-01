#include<stdio.h>
#include<malloc.h>
#include<string.h>
void main(){
	Pessoa*p;
	p=(Pessoa*)malloc(sizeof(Pessoa));
	strcpy(p->nome,"Gui");
	p->idade=23;
	
	//Usar os dados apontados por p...
	free(p);
}
