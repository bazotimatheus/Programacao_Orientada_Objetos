#include<iostream>
#include<string>
using namespace std;

#include "Veiculo.h"

	Veiculo::Veiculo(string m, int t, float c){
		setMarca(m);
		setTanque(t);
		setConsumo(c);
	}
	Veiculo::~Veiculo(void){
		cout << "\n Veiculo destruido: " << marca << endl;
	}
	
	string Veiculo::getMarca()		{return marca;	}
	int Veiculo::getTanque()		{return tanque;	}
	float Veiculo::getConsumo()		{return consumo;}
	void Veiculo::setMarca(string m)	{marca = m;	}
	void Veiculo::setTanque(int t)		{tanque = t;	}
	void Veiculo::setConsumo(float c)	{consumo = c;	}
