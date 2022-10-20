#include<iostream>
#include<string>
using namespace std;

class Carro: public Veiculo
{
	private:
		int portas;
	public:
		int getPortas()		{return portas;}
		void setPortas(int p)	{portas=p;}
};
