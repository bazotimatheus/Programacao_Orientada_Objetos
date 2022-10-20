#include<iostream>
#include<string>
using namespace std;

#include "Veiculo.h"
#include "Carro.h"

	Carro::Carro(string m, int t, float c, int p):Veiculo(m, t, c)
	{
		setPortas(p);
	}
	Carro::~Carro(void){
		cout << "\n Carro destruido: " << getMarca() << endl;
	}
	
	int Carro::getPortas()		{return portas; }
	void Carro::setPortas(int p)	{portas = p;}
