#include<stdio.h>
#include<stdlib.h>
int main()
{
	int vetor[3],vetor2[3];
	int i;
	for(i=0;i<3;i++){
	
	   printf("Digite o elemento da posicao %d:",i);
	   scanf("%d",&vetor[i]);
	   vetor2[i]=vetor[i];
   }
   for(i=0;i<3;i++){
   	if(i==0){
   		printf("%d\t",&vetor[i]);
	   }
	else{
		vetor[i]=vetor[i]+vetor[i-1];
		printf("%d\t",&vetor[i]);
	}   
   }
   printf("\n");
   system("pause");
   return 0;
}
