#include<stdio.h>
typedef struct {
	float largura;
	float comprimento;
}terreno;
int main(){
	terreno t1,t2;
	
	t1.largura=27.5;
	t1.comprimento=40.0;
	t2=t1;
	printf("\nlargura=%f\n",t2.largura);
	printf("comprimento=%f\n",t1.comprimento);
}
