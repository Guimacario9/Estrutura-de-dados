//Sem tamanho de campo
//não usa manipuladores
#include<iostream>
#include<iomanip>//para uso de manipuladores
using namespace std;

int main()
{
	float lapis=4.875,borracha=23.45,canetas=4.20,cadernos=8.00,fitas=13.05;
	cout<<"\n\n\n";
	cout<<setiosflags(ios::fixed);//ponto decimal(não exponicial)
	cout<<setiosflags(ios::showpoint);//sempre imprime o ponto decimal
	cout<<setprecision(2);//duas casa decimais
	cout<<'\n'<<"Lapis       "<<lapis;
	cout<<'\n'<<"Borracha    "<<borracha;
	cout<<'\n'<<"Caderno     "<<cadernos;
	cout<<'\n'<<"Fitas       "<<fitas;
	cout<<endl;
	system("PAUSE");
	return 0;
}
