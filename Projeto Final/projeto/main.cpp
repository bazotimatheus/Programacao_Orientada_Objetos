#include <iostream>
using namespace std;

#include "Produto.h"
#include "Presunto.h"
#include "Queijo.h"

int vencimento(int x)
{
	return (x*2);
}

int vencimento(float y)
{
	return (y*2);
}

void imprime()
{
	cout << "Teste." << endl;
}

main()
{
	float pre;
	{ //bloco limitador 1
	
		Produto p1 (101, "Camisa", 35.5);
		cout	<< "\n\nProduto: "
				<< p1.getCod() << " - "
				<< p1.getNome() << " - R$ "
				<< calcPrecoFinal(p1)
				<< endl;
	}
	
	{ //bloco limitador 2
		Queijo q1 (1);

		Presunto pr1 ("Especial", 10, 99999, "sadia", pr1.calcPeso(q1));
		
		cout << "\n\nProduto: "
			<< pr1.getCod() << " - "
			<< pr1.getMarca() << " - "
			<< pr1.getNome() << " - "
			<< pr1.getPeso() << " Kg - R$ "
			<< calcPrecoFinal(pr1)
			<< endl;
			
		if(vencimento(pr1.getCod())>=20)
			cout << "\n Presunto estragou." << endl;
		else
			cout << "\n Presunto não estragou." << endl;
		if(vencimento(q1.getPeso())>3)
			cout << "\n Queijo estragou." << endl;
		else
			cout << "\n Queijo não estragou." << endl;
	}
	
	imprime();
}
