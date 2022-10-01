//Class1.Cpp
//Mostrar a classe retangulo
#include<iostream>
using namespace std;
class retangulo //definição da  classe
{
	private:
		int base,altura;//membros de dados
    public:
    	void init (int b,int h)//função dos membros para inicalizar dados
    	{
    		base=b;
    		altura=h;
		}
		void printdata()//Função membro em que imprime dados
		{
			cout<<"Base="<<base<<"\taltura="<<altura;
			cout<<"\tArea="<<(base*altura)<<endl;
		}
		
};
int main ()
{
	retangulo x,y;//declara dois objetos da classe retangulo
	x.init(5,3);//chama função membro para inicializar
	y.init(10,6);//os dados dos dois objetos
	
	x.printdata();//chama função membro que imprime na area
	y.printdata();//chama função membro que imprime na area
	
	
	return 0;
}

