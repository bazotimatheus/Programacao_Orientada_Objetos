#include<iostream>
#include<string>
using namespace std;

#include "Produto.h"
#include "CD.h"
#include "Livro.h"

float calcPrecoFinal(int paginas, int faixas)
{
	return(paginas*5+faixas*200);
}

main()
{
	Livro livro("terca feira","entregar segunda",2019,"projeto",200);
	CD cd("pega fogo cabaré","um ser humano de bem",2019,"briga de rua",10);
	
	livro.imprime();
	
	cd.imprime();
	
	livro.maisFaixa(cd);
	
	cd.imprime();
	
	cout << "\nO preço do livro e do CD é R$" << calcPrecoFinal(livro.getPaginas(),cd.getFaixas()) << ",00.\n" << endl;
	
	
}
