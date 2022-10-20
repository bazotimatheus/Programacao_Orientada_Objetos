#include<iostream>
#include<string>
using namespace std;

#include "Veiculo.h"
#include "Carro.h"
#include "Moto.h"

main()
{
	Carro carro("fiat", 20, 27.5, 4);
	Moto moto("ninja", 10, 300, 2);
	
	cout 	<< "\n Carro:\n"
		<< "\n Marca: " << carro.getMarca()
		<< "\n Tanque: " << carro.getTanque() << " L."
		<< "\n Consumo: " << carro.getConsumo() << " km/L."
		<< "\n Portas: " << carro.getPortas() << " portas."
		<< endl;
	
	cout	<< "\n Moto:\n"
		<< "\n Marca: " << moto.getMarca()
		<< "\n Tanque: " << moto.getTanque() << " L."
		<< "\n Consumo: " << moto.getConsumo() << " km/L."
		<< "\n Tempos do Motor: " << moto.getTemposMotor() << " tempos."
		<< endl;
}
