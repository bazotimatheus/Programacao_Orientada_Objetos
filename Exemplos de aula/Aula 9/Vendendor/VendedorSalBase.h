#ifndef VENDEDORSALBASE_H
#define VENDEDORSALBASE_H

#include <iostream>
#include <string>
using namespace std;
#include "VendedorComissionado.h"

class VendedorSalBase : public VendedorComissionado{
	private:
		double sal;
	public:
		VendedorSalBase(double, const string &, double);
		~VendedorSalBase();
		void setSal(double);
		double getSal() const;
		double calcRendimentos() const;
		void imprime() const;
};

#endif
