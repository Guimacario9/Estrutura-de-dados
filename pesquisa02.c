#include <stdio.h>
#include <string.h>
#define N 3

typedef struct {
	char codigo[5];
	char desc[25];
	int qtd;
	float preco;
} Produto;

int busca (char needForspped[4], Produto mu [N]){
	int resp, j; 
	
	for(j=0; j<5; j++)
	{
	if (!strcmp(needForspped, mu[j].codigo))
		resp = j;	
	}
		return resp;
}



void main()
{

	const Produto mercado[N] = {
									{"aaa","parafuso", 87, 0.70},
									{"bbb","macarao", 27, 4.70},
									{"ccc","bolsa", 37, 1.70}
								};



	char codigo[4]; //elemento esses ABCD
		
	int i,x;

	for(x=0; x=2;){
	
	
	printf("\n Informe o codigo a pesquisar: ");
	scanf("%s", codigo);


	if (i == -1)
		printf("Nou");
	else
		printf("\n  %s %s %d %5.2f",mercado[i].codigo,mercado[i].desc,mercado[i].qtd,mercado[i].preco);
	}
	
	printf("\n repitir 1S 2N: ");
	scanf("%d", x);
}

