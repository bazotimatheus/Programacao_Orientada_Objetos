#include <iostream>
#include <string>
using namespace std;

#include "Produto.h"
#include "Presunto.h"
#include "Queijo.h"

	Presunto::Presunto(const string &m, float pe, int c, const string &n, float p) : Produto(c, n, p), marca(m), peso(pe)
	{
		//não tem setter pois tem inicializador //peso será setado com calcPeso
	}
	Presunto::~Presunto()
	{
		cout << "\nFim de objeto de Presunto..." << endl;
	}
	string Presunto::getMarca() const { return marca; }
	float Presunto::getPeso() const { return peso; }
	void Presunto::setMarca(const string &m) { marca = m; }
	void Presunto::setPeso(float pe) { peso = pe; }
	float Presunto::calcPeso(Queijo q)
	{ return (q.peso*2/3); }
