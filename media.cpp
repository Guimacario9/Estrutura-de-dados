//mostrar o uso de cin com varias entradas
//Calcula a media de 4 notas
#include<iostream>
using namespace std;
int main()
{
	cout<<"\nDigite as notas das 4 provas:\n";
	float p1,p2,p3,p4;
	
	cin>>p1>>p2>>p3>>p4;
	
	float media=(p1+p2+p3+p4)/4.0;
	cout<<"\nMedia:"<<media<<endl;
	system("PAUSE");
	return 0;
}
