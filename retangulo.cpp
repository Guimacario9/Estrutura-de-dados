//Class1.Cpp
//Mostrar a classe retangulo
#include<iostream>
using namespace std;
class retangulo //defini��o da  classe
{
	private:
		int base,altura;//membros de dados
    public:
    	void init (int b,int h)//fun��o dos membros para inicalizar dados
    	{
    		base=b;
    		altura=h;
		}
		void printdata()//Fun��o membro em que imprime dados
		{
			cout<<"Base="<<base<<"\taltura="<<altura;
			cout<<"\tArea="<<(base*altura)<<endl;
		}
		
};
int main ()
{
	retangulo x,y;//declara dois objetos da classe retangulo
	x.init(5,3);//chama fun��o membro para inicializar
	y.init(10,6);//os dados dos dois objetos
	
	x.printdata();//chama fun��o membro que imprime na area
	y.printdata();//chama fun��o membro que imprime na area
	
	
	return 0;
}

