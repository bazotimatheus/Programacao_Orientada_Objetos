#ifndef CD_H
#define CD_H

#include<iostream>
#include<string>
using namespace std;

#include "Produto.h"

class CD:public Produto
{
	private:
		string genero;
		int faixas;
	public:
		CD(const string &, const string &, int, const string &, int);
		~CD();
		
		string getGenero() const;
		int getFaixas() const;
		
		void setGenero(const string &);
		void setFaixas(int);
		
		void imprime() const;
		
		friend class Livro;
};

#endif
