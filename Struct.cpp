#include<stdio.h>
#include<stdlib.h>
int main(){
	int *x;//x � o ponteiro para Int.
	x=malloc(sizeof(int));//malloc e usado para reservar o espa�o para o programa necessario.
	*x=7;//x � o dado apontado para o x
	printf("\nx valor de =%d",*x);//para mostrar o dado,coloca-se o * antes
	system ("pause");
}
