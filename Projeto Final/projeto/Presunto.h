#ifndef PRESUNTO_H
#define PRESUNTO_H

#include <string>
using namespace std;

#include "Produto.h"

class Queijo;

class Presunto:public Produto
{
	protected:
		string marca;
		float peso;
	public:
		Presunto(const string &, float, int, const string &, float);
		~Presunto();
		string getMarca() const;
		float getPeso() const;
		void setMarca(const string &);
		void setPeso(float);
		float calcPeso(Queijo);
};

#endif
