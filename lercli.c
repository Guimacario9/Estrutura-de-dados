#include<stdio.h>
void main(){
	char url[]="clientes.txt";
	char ch;
	FILE *arq;
	
	arq = fopen(url, "r");
	if(arq == NULL)
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	    while( (ch=fgetc(arq))!= EOF )
		putchar(ch);
			
	fclose(arq);
	

	
}
