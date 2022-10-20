#include<iostream>
#include<string>
using namespace std;

#include "Veiculo.h"
#include "Moto.h"

	Moto::Moto(string m, int t, float c, int tm):Veiculo(m, t, c)
	{
		setTemposMotor(tm);
	}
	Moto::~Moto(void){
		cout << "\n Moto destruida: " << getMarca() << endl;
	}
	
	int Moto::getTemposMotor()	{return temposMotor;}
	void Moto::setTemposMotor(int tm)	{temposMotor = tm;}
