#include <iostream>
#include <string>
using namespace std;
#include "VendedorComissionado.h"

VendedorComissionado::VendedorComissionado(const string &n, double v, double c)
	{
		nome = n;
		setVendas(v);
		setComissao(c);
	}
VendedorComissionado::~VendedorComissionado() {}

void VendedorComissionado::setNome(const string &n) { nome = n; }

string VendedorComissionado::getNome() const { return nome; }

void VendedorComissionado::setVendar(double v){
	vendas = ( v < 0.0) ? 0.0 : v;
}

double VendedorComissionado::getVendas() const { return vendas; }

void VendedorComissionado::setComissao(double c){
	comissao = (c > 0.0 && c < 1.0) ? c : 0.0;
}

double VendedorComissionado::getComissao() const { return comissao; }

double VendedorComissionado::calcRendimentos() const { return (comissao * vendas); }

void VendedorComissionado::imprime() const {
	cout 	<< "\n Comissionado: " << nome
		<< "\n Vendas: " << vendas
		<< "\n Comissao: " << comissao << endl;
}
