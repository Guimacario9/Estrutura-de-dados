#include<iostream>
using namespace std;
int main (){
	float nota,media=0.0;
	
	cout<<"\n Digite a Primeira nota: ";
	cin>>nota;
	media+=nota;
	
	cout<<"\n Digite a Segunda nota: ";
	cin>>nota;
	media+=nota;
	
	cout<<"\n Digite a Terceira nota: ";
	cin>>nota;
	media+=nota;
	
	cout<<"\n Digite a Quarta nota: ";
	cin>>nota;
	media+=nota;
	
	media/=4.0;
	cout<<"\nMedia: "<<media<<endl;
	
	return 0;
}
