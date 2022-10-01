#include <stdio.h>
void mostrar(char n[30]){
	if(n[0]!='\0'){
		printf("%c",n[0]);
		mostrar(n+1);
	}
}
int main(){
char nome[30];
puts("Informe o nome: ");
scanf("%s",nome);	
mostrar(nome);
return 0;
}
