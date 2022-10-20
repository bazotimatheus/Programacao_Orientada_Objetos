#ifndef VENDEDORCOMISSIONADO_H
#define VENDEDORCOMISSIONADO_H

#include<iostream>
#include<string>
using namespace std;

class VendedorComissionado{
	protected:
		string nome;
		double vendas;
		double comissao;
	public:
		VendedorComissionado(const string &, double, double);
		~VendedorComissionado();
		void setNome(const string &);
		string getNome() const;
		void setVendas(double);
		double getVendas() const;
		void setComissao(double);
		double getComissao() const;
		virtual double calcRendimento() const;
		virtual void imprime() const;
};

#endif
