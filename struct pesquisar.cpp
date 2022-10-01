#include <string.h>
#include <stdio.h>

typedef struct {
	char rg[21];
	char nome[21];
	char fone [21];
	
}Pessoa;


int pesqseq ( Pessoa v[], int tamanho, char wrg[21])
{
	int k=0;
	while ( (k<tamanho) && strcmp(wrg,v[k].rg))
	k++;
	if (k <tamanho)
	return k ;
	else
	return -1;
	
}
void troca(Cliente v[],wi,k){
	
}
void bubble(Cliente v[],int Tamanho){
   int i,loop,bolha;
   loop=tamanho-1;
    while(loop>0){
    	bolha=-1;
    	 for(i=0 ;i<loop,i++)
    	  if(strcmp(v[i].rg,v[i+1].rg>0))
    	    troca(v,i,i+1);
    	    bolha=1;
	}
	
}
int main (){
	Pessoa Cliente[] =
	{{"234", "vingadora", "996407060"},
	{"546","valeska", "777777777"},
	{"676", "japa Federal", "884747"}
	};
	
	char chave[21];
	int i, tamanho;
	printf("Informe RG:\n");
	scanf("%s", chave);
	// pesquisa
	// comando sizeof e mostrar quantos bites tem o parametro  em bite ...
	bubble(Cliente,Tamanho);
	tamanho = sizeof(Cliente) / sizeof(Pessoa);
	i= pesqseq(Cliente, tamanho, chave);
	//mostrar resultado
	if (i==-1)
	printf ("\nNot Found\n");
	else
	printf("\n%s\n", Cliente[i].nome);
	}

