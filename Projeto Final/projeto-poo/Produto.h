#ifndef PRODUTO_H
#define PRODUTO_H

#include<iostream>
#include<string>
using namespace std;

class Produto
{
	protected:
		string nome;
		string autor;
		const int ano; //atributo constante, inicializador obrigatorio.
	public:
		Produto(const string &, const string &, int); //string sao internamente referencias para valores ctes.
		~Produto();
		
		string getNome() const;
		string getAutor() const;
		int getAno() const;
		
		void setNome(const string &);
		void setAutor(const string &);
		//void setAno(int); //ano é const, não tem setter.
		
		virtual void imprime() const;
		
		friend float calcPrecoFinal(Produto);
};

#endif
