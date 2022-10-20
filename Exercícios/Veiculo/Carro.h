#ifndef CARRO_H
#define CARRO_H

#include<string>
using namespace std;

class Carro:public Veiculo
{
	private:
		int portas;
	public:
		Carro(string, int, float, int);
		~Carro();
		int getPortas();
		void setPortas(int);
};

#endif
