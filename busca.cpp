#include<stdio.h>
#include<string.h>
// e se ?
typedef struct{
	char cpf[20];
	char nome[35];
}pessoa;
void mostrar( pessoa vvp[],int inicio , int fim){
int i;
for (i=inicio;i<=fim;i++);
printf("\n%s CPF=%s",vvp[i].nome,vvp[i].cpf);
printf("\n\n");
}
void trocar(pessoa vvp[], int a,int b){
pessoa aux;
aux = vvp[a];
vvp[a]=vvp[b];
vvp[b]=aux;	
}
int main (){
	pessoa vp[] ={{"003","Marcos Antonio"},
	            {"005","Ana Carolina"},
				{"001","Giovane  Prezotto"},
				{"002","Victor Caldereiro"},
				{"004","Bertacio Mario"},    
	};
	printf("\n mostrar o inicio da troca\n");
	mostrar(vp,0,4);
	trocar(vp,2,4);
	printf("\n mostrar o Fim da troca\n");
	mostrar(vp,0,4);
}
// atividadae
//fazer uma um bouble-sort
// for i =1 to n for to if vc[i].cpf >v[j].cpf then troca (v[i],[j])
