#include<iostream>
#include<string>	//para usar o tipo string
using namespace std;
class LivroDeNotas
{
	public:
	string curso;	//atributo
	
	public:	//especificador de acesso
		void mostraMensagem()	//método
		{
			cout<<"Livro de Notas"<<endl;
		}
		
		//método recebendo parâmetro
		void mostraNomeDisciplina(string nome)
		{
			cout<<"Disciplina: "<<nome<<endl;
		}
		
		//método retorna o valor de um atributo
		string mostraNomeCurso()
		{
			return curso;
		}
};	//fim da classe

main()
{
	LivroDeNotas livro;	//cria um objeto livro
	
	//valor do atributo
	livro.curso = "Ciencias da Cumputacao";
	
	livro.mostraMensagem();	//chama o método
	
	//mostra valor atributo
	cout<<"Curso: "<<livro.mostraNomeCurso()<<endl;
	
	livro.mostraNomeDisciplina("Prog2");	//com parâmetro
}
