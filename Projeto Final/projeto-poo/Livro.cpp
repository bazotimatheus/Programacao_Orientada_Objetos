#include<iostream>
#include<string>
#include<string.h>
using namespace std;

#include "Produto.h"
#include "Livro.h"
#include "CD.h"

Livro::Livro(const string &n, const string &at, int a, const string &g, int p):Produto(n, at, a) , genero(g), paginas(p)
{
	//não tem setter pois usa inicializadores
}

Livro::~Livro()	{ cout << "\nFim do objeto livro." << endl; }

string Livro::getGenero() const { return genero; }
int Livro::getPaginas() const	{ return paginas;}

void Livro::setGenero(const string &g)	{ genero = g; }
//void Livro::setPaginas(int p)		{ paginas = p; } //paginas é const por isso não tem setter

void Livro::imprime() const
{
	cout 	<< "\n Livro:\n"
			<< "\n Nome: " << getNome()
			<< "\n Autor: " << getAutor()
			<< "\n Ano: " << getAno()
			<< "\n Genero: " << getGenero()
			<< "\n Paginas: " << getPaginas() << endl;
}

void Livro::faixaPag(CD d) // metodo friend //livro é friend de cd
{
	 = d.faixas;
}
