#include<iostream>
#include<string>
using namespace std;

#include "Produto.h"

Produto::Produto(const string &n, const string &at, int a)
	: nome(n), autor(at), ano(a)//inicializadores.
{
	//não tem setters pois foi usado inicializadores.
}
Produto::~Produto()	{ cout << "Fim do objeto produto." << endl;	}

string Produto::getNome() const 	{ return nome;	}
string Produto::getAutor() const 	{ return autor;	}
int Produto::getAno() const 		{ return ano;	}

void Produto::setNome(const string &n)		{ nome = n;	}
void Produto::setAutor(const string &at)	{ autor = at;	}
//void Produto::setAno(int a)			{ ano = a;	}//ano é const, não tem setter.

void Produto::imprime() const
{
}


