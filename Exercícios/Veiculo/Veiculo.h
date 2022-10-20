#ifndef VEICULO_H
#define VEICULO_H

#include<string>
using namespace std;

class Veiculo
{
	private:
		string marca;
		int tanque;
		float consumo;
	public:
		Veiculo(string, int, float);
		~Veiculo();
		string getMarca();
		void setMarca(string);
		int getTanque();
		void setTanque(int);
		float getConsumo();
		void setConsumo(float);
};

#endif
