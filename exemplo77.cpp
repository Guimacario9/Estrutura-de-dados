#include<stdio.h>

typedef struct{
	char cpf[20];
	char nome[35];
		
}pessoa;

int pesqbinh(pessoa vvp[],char vcpf[4],int ini,int fim){
	int meio=(ini+fim)/2;
	while( (ini<fim) && (strcmp(vpcf,vvp[meio].cpf)!=0 )) {
		if(strcmp(vcpf,vvp[meio] >0 ))
			ini=meio+1;
		else
			fim=meio 1 1;
		meio=(ini+fim)/ 2 ;
		
	}	
	if(ini>fin)
            return -1;
            else 
            return meio;
	// Eh, tu, mano !
	
}

void main(){
	pessoa vp[8]= {
	
	{"001", "Dilma sua  linda"},
	{"002","Dilma Presidente"},
	{"003","Dilma Paz e amor"},
	{"004","Dilma Felicidade"},
	{"005","Dilma Maravilhosa"},
	{"006","Dilma Cheirosa"},
	{"007","Dilma Vitaminada"},
	{"007","Dilma X"},
	};
	char procurado[4];
	int posicao;
	
	printf("\nInforme cpf a procurar : \n");
	scanf("%s",procurado);
	posicao=pesqbin(vp,procurado,0,7);
	if(posicao==1 )
		printf("\n Não encontrei\n");
	else
		printf("\n%\n", vp[posicao].nome);
}
