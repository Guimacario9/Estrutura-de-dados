#include<stdio.h>
void main(){
	FILE *clientes;
	clientes=fopen("clientes.txt","w");
	fprintf(clientes,"%20s %8.2f\n","camisa",35.00);
	fprintf(clientes,"%20s %8.2f\n","jaqueta",50.00);
	fprintf(clientes,"%20s %8.2f\n","meia",25.00);
	fclose(clientes);
	
}
