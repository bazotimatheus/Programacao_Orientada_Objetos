#ifndef LIVRO_H
#define LIVRO_H

#include<iostream>
#include<string>
using namespace std;

#include "Produto.h"

class CD; //predefinição de classe, para metodo que usa classe friend

class Livro:public Produto
{
	private:
		string genero;
		const int paginas;
	public:
		Livro(const string &, const string &, int, const string &, int);
		~Livro();
		
		string getGenero() const;
		int getPaginas() const;
		
		void setGenero(const string &);
		//void setPaginas(int); //paginas é const, não tem setter
		
		void imprime() const;//sobreposição (herda, mas sobrescreve o metodo)
		
		void maisFaixa(CD); //Livro é friend de CD
};

#endif
