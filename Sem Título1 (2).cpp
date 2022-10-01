#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void divide(int n[],int start,int end,int*newfirst,int*newlast){
	int ref,meio,begin1,final1,aux;
	meio=(start+end)/2;
	ref=n[meio];
	begin1=start;
	final1=end;
	while(begin1<final1){
		while(n[begin1]<ref)begin1++;
		while(n[begin1]>ref)final1--;
		if(begin1<=final1){
			troca(n,begin1,final1);
			begin1++;
			final1--;
		}
		*newfirst=begin1;
		*newfirst=final1;
	}
	void main() {
	troca vp[9] = {
	{"001"}
	{"002"},
	{"003"},
    {"004"},
    {"005"},
    {"006"},
    {"007"},
    {"008"},
	};
	
	}
}
