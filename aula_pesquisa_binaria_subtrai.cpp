#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char cod[5];
	char desc[25];
	int qtd;
	float preco;
} numeros;
/**/
	int aux_Menos( numeros vv[]){
		int x,p=0;
		for (x=0; x < sizeof(vv); x++)
			if(vv[x].cod < vv[p].cod)
				p=x;
	}
/**/
main(){
		int auxMenos;
	numeros v[] = {{"12", "camisa", 99, 19.90},
	 							{"23", "calca", 89, 29.90},
	 							{"34", "sapato", 79, 39.90},
	 							{"35", "cabelo", 69, 49.90},
	 							{"56", "meia", 59, 59.90}};
							
		auxMenos = aux_Menos(v);  
		printf("\n tamanho em bytes de munero = %d",sizeof(numeros));//valor em bystes
		printf("\n tamanho do vetor e = %d",sizeof(v)); // valor em bytes
		
		printf("\n quantidade de elementos = %d", sizeof(v)/ sizeof(numeros));
}
