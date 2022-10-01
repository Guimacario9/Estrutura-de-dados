//Autor:Gui Macário
#include<stdio.h>
#include<string.h>
#include<malloc.h>

 typedef struct{
    char desc[30];
	float valor;
	int qtd;
	struct item *proximo;	
 }item;
 void listar(item * first){
 	item *p=first;
 	while(p!=NULL){
 		printf("\n%s",p->desc);
 		p=(item *)p->proximo;
	 }
	 printf("\n");
 }
 void main(){
 	item *primeiro,*aux;
 	primeiro=NULL;
 	
 	aux=(item* ) malloc(sizeof(item));
 	strcpy(aux->desc,"batata");
 	aux->qtd=2;
 	aux->valor=0.3;
 	aux->proximo=NULL;
 	
 	primeiro=aux;//Este é o primeiro da lista
 	
 	aux=(item*)malloc(sizeof(item));
 	strcpy(aux->desc,"cebola");
 	aux->qtd=3;
 	aux->valor=0.45;
 	aux->proximo=NULL;
 	 	
 	primeiro->proximo=(struct item*)aux;//Este é o segundo da lista
 	
 	
 	aux=(item*)malloc(sizeof(item));
	strcpy(aux->desc,"tomate");
	aux->qtd=5;
	aux->valor=0.90;
	aux->proximo=NULL;
	
	primeiro->proximo=(struct item*)aux; //Este é o terceiro da lista
 	
 	
 	
 	listar(primeiro);
 	
 	
 }
