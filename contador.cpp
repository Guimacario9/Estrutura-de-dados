#include <stdio.h>
int fatorial(int x){
	int fat,contador;
	contador=x;
	while(contador>0){
		fat=fat*contador;
		contador=contador-1;
	}
	return 0;
}
int main (void){
	int num,resultado;
	puts("Informe um numero\n");
	scanf("%d",&num);
	resultado=fatorial (num);
	printf("\nFatorial(%d)=%n\n",num,resultado);
} 
