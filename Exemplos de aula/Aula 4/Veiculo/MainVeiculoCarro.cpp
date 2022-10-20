#include<iostream>
#include<string>
using namespace std;

#include "Veiculo.h"
#include "Carro.h"

main()
{
	int p, t;
	float con;
	string m;
	Carro c;
	
	cout << "Marca: ";
	cin >> m;
	c.setMarca(m);
	
	//cin.clear();		//Limpa o buffer
	//cin.sync();		//getline não funciona em todos os compiladores!!!
	//getline(cin,m);	//nomes compostos
	
	//OU, de forma simples e que funciona em todos os compiladores:
	//cin >> m;		//nomes simples (sem espaço)
	
	cout << "Portas: ";
	cin >> p;
	c.setPortas(p);
	
	cout << "Tanque: ";
	cin >> t;
	c.setTanque(t);
	
	cout << "Consumo: ";
	cin >> con;
	c.setConsumo(con);
	
	cout << "\n\nCarro: " << c.getMarca() << "\nPortas: " << c.getPortas() << "\nAutonomia: " << c.calcAutonomia() << endl;
}
