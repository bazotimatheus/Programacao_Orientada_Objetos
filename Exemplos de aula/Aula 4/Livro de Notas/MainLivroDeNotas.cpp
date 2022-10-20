#include<iostream>
#include<string>
using namespace std;

#include "LivroDeNotas.h"

main()
{
	LivroDeNotas livro1 ("c++");
	LivroDeNotas livro2 ("Java");
	
	cout << "Livro de Notas 1: " << livro1.getNomeCurso() << "\nLivro de Notas 2: " << livro2.getNomeCurso() << endl;
}
