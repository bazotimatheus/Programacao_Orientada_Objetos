#include<iostream>
#include<string>
using namespace std;

#include "Produto.h"
#include "CD.h"

CD::CD(const string &n, const string &at, int a, const string &g, int f):Produto(n, at,a) , genero(g), faixas(f)
{
	//nao tem setter pois inicializador
}

CD::~CD()	{ cout << "\nFim do objeto cd."; }

string CD::getGenero() const	{ return genero; }
int CD::getFaixas() const	{ return faixas; }

void CD::setGenero(const string &g)	{ genero = g; }
void CD::setFaixas(int f)		{ faixas = f; }

void CD::imprime() const
{
	cout 	<< "\n CD:\n"
			<< "\n Nome: " << getNome()
			<< "\n Autor: " << getAutor()
			<< "\n Ano: " << getAno()
			<< "\n Genero: " << getGenero()
			<< "\n # de Faixas: " << getFaixas() << endl;
}
