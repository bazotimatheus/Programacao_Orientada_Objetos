#include <iostream>
using namespace std;
#include "Produto.h"
#include "Presunto.h"
#include "Queijo.h"

main()
{
	{ //bloco limitador 1

	Produto p1 (101, "Camisa", 35.5);
	cout << "\n\nProduto: "

	<< p1.getCod() << " - "
	<< p1.getNome() << " - R$ "
	<< calcPrecoFinal(p1)
	<< endl;

	}

	{ //bloco limitador 2
	Queijo q1 (0.5);
	
	Presunto pr1 ("Especial", 103, "Sem Gordura", 9.5);
	
	pr1.setPeso( pr1.calcPeso( q1 ));
	cout << "\n\nProduto: "
	
	<< pr1.getCod() << " - "
	<< pr1.getMarca() << " - "
	<< pr1.getNome() << " - "
	<< pr1.getPeso() << " Kg - R$ "
	<< calcPrecoFinal(pr1)
	<< endl;
	}
}
