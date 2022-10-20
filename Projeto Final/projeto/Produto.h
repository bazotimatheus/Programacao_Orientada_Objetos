#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using namespace std;

class Produto
{
	protected:
		const int cod;
		string nome;
		float preco;
	public:
		Produto(int, const string &, float);
		~Produto();
		
		int getCod() const;
		string getNome() const;
		float getPreco() const;
		
		//void setCod(int); //valor const
		void setNome(const string &);
		void setPreco(float);
		
		virtual void imprime() const;
		friend float calcPrecoFinal(Produto);
};

#endif
