#include<iostream>
#include<string>
#include "LivroDeNotas.h"
using namespace std;

main()
{
	LivroDeNotas livro1("c++");
	LivroDeNotas livro2("java");
	
	cout << "Livro de Notas 1: " << livro1.getNomeCurso() << "\nLivro de Notas 2: " << livro2.getNomeCurso() << endl;
}
