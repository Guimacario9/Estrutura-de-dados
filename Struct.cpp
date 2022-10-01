#include<stdio.h>
#include<stdlib.h>
int main(){
	int *x;//x é o ponteiro para Int.
	x=malloc(sizeof(int));//malloc e usado para reservar o espaço para o programa necessario.
	*x=7;//x é o dado apontado para o x
	printf("\nx valor de =%d",*x);//para mostrar o dado,coloca-se o * antes
	system ("pause");
}
