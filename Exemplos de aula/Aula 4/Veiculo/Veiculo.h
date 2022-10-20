#include<iostream>
#include<string>
using namespace std;

class Veiculo
{
	private:
		string marca;
		int tanque;
		float consumo;
	public:
		string getMarca()	{return marca;}
		int getTanque()		{return tanque;}
		float getConsumo()	{return consumo;}
		
		void setMarca(string m)	{marca = m;}
		void setTanque(int t)	{tanque = t;}
		void setConsumo(float c){consumo = c;}
		
		float calcAutonomia()	{return tanque*consumo;}
};
