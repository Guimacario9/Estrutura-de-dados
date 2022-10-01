#include<stdio.h>
#include<string.h>
typedef struct{
char desc[40];
int codigo;
float preco;
}protudo;
int main(){
	protudo p[10];
	
	strcpy(p[0].codigo,"aaaa");
	strcpy(p[0].desc,"Arruelas niqueladas");
	p[0].preco=3.50;
	
	strcpy(p[0].codigo,"bbb");
	strcpy(p[0].desc,"Porcas niqueladas");
	p[0].preco=3.60;
	
	printf("\n %s %s %f \n",p[0].codigo,p[0].desc,p[0]p.preco);
	
}
