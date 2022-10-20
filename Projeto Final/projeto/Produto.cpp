#include <iostream>
#include <string>
using namespace std;

#include "Produto.h"

	Produto::Produto(int c, const string &n, float p):cod(c), nome(n), preco(p)
	{
		
	}
	Produto::~Produto()
	{
		cout << "\nFim de objeto de Produto..." << endl;
	}
	
	int Produto::getCod() const 	{ return cod; }
	string Produto::getNome() const { return nome; }
	float Produto::getPreco() const	{ return preco; }
	
	//void Produto::setCod(int c) { cod = c; } //cod é const
	void Produto::setNome(const string &n) { nome = n; }
	void Produto::setPreco(float p) { preco = p; }
	
	float calcPrecoFinal(Produto prod)
	{ return prod.preco * 1.4; }
	
	void Produto::imprime() const
	{
	}
