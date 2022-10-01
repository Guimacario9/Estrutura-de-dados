#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
char nome[30];
char cpf[20];
}cliente;
int buscar(cliente vv[],char cpf_pesq[20]){
	//Retorna a posição no vetor onde foi encotrado
	// o cpf retorna -1 se não encontrar
	int i=0;
	while(strcmp(vv[i].cpf,"0")!=0 &&
	strcmp(cpf_pesq,vv[i].cpf)!=0) {
		i++;
	}
	if (strcmp(vv[i].cpf,"0")==0)
	return -1;
	else
    return i;
}
int main(){
	char procurado[20];
	int resultado;
	cliente v[]={{"Charles","123"},
	            {"Jonathas","234"},
				{"Renan","345"},
				{"Pedro","456"},
				{"","0"}  
	};
	printf("\informe cpf a pesquisar :");
	scanf("%s",procurado);
	if (resultado==1)
	printf("\ncpf não cadastro !! \n");
	else
	printf("\%nd\n",v[resultado].nome);
	printf("\n%d\n",sizeof(v)/sizeof(cliente));
}
