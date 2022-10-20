#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
using namespace std;

class Produto
{	protected:
		const int cod;
		string nome;
		float preco;
	public:
		Produto(int, string, float);
		~Produto();
		int getCod();
		string getNome();
		float getPreco();
		//void setCod(int); // cod é const, não tem setter
		void setNome(string);
		void setPreco(float);
		
		friend float calcPrecoFinal(Produto);
};

#endif
