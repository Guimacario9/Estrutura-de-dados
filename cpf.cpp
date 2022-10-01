#include <stdio.h>
#include<string.h>
typedef struct {
	char cpf[20];
	char nome[35];
	
} pessoa;

int pesqbin (pessoa vvp[], char vcp[4],int ini, int fim) {
    int meio =(ini+fim) / 2;
   while( (ini<fim) && (strcmp(vpcf,vvp[meio].cpf)!=0 )){
        if (strcmp(vcpf, vvp[meio] > 0))
        ini = meio + 1;
        else
        fim = meio -1;
        meio = (ini + fim) / 2;
            }
            if(ini>fin)
            return -1;
            else 
            return meio;
}
void main() {
	pessoa vp[8] = {
	{"001","dilma linda"}
	{"002","dilma presidenta"},
	{"003","dilma paz e amor"},
    {"004","dilma felicidade"},
    {"005","dilma Maravilhosa"},
    {"006","dilma vitaminada"},
    {"007","dilma x"},
	};
	char procurado[4];
	int posicao;
	
	printf("\n Informe o cpf a procurar: \n");
	acanf("%s", procurado);
	posicao= pesqbin(vp,procurado, 0 7);
	if (posicao ==1)
	printf("\n nao encontrei\n");
	else
	printf ("\n %s \n", vp[posicao]. nome);
}
