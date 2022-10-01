#include<stdio.h>
#include<stdlib.h>
int main(){
	int *x,z;
	*x=45;
	//x=(int*)malloc(sizeof(int));
	free(x)
	x=&z;
	z=32;
	printf("\nz = %d\n",z);
	system ("pause");
}
