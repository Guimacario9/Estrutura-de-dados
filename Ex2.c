#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main()
{
int x, vetp[5];
for(x=1; x<=4; x++)
{
printf ("\tDigite um numero: ");
scanf("%d",&vetp[x]);
printf ("\n");
}
for(x=1; x<=4; x++)
printf ("%d\t",vetp[x]);
printf ("\n");
printf("\n");
system("pause");
return(0);
}
