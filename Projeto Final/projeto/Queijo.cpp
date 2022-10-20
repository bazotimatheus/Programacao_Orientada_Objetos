#include <iostream>
using namespace std;

#include "Queijo.h"

	Queijo::Queijo(float pe) : peso(pe)
	{
		setPeso(pe);
	}
	Queijo::~Queijo()
	{
		cout << "\nFim de objeto de Presunto..." << endl;
	}
	float Queijo::getPeso() const { return peso; }
	void Queijo::setPeso(float pe) { peso = pe; }
