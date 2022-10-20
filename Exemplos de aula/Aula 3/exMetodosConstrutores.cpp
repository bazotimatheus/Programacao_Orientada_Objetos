#include<iostream>
#include<string>
using namespace std;

class LivroDeNotas
{
	private:
		string nomeCurso;
		
	public:
		LivroDeNotas (string nome)
		{
			setNomeCurso(nome);
		}
	
	void setNomeCurso(string nome)
	{
		nomeCurso=nome;
	}
	
	string getNomeCurso()
	{
		return nomeCurso;
	}
	
	void mostraMensagem()
	{
		cout << "Bem vindo ao Livro de Notas do curso" << getNomeCurso() << "!" << endl;
	}
};

main()
{
	LivroDeNotas livro1("C++");
	LivroDeNotas livro2("Java");
	
	cout << "Livro de Notas 1: " << livro1.getNomeCurso() << "\nLivro de Notas 2: " << livro2.getNomeCurso() << endl;
}
