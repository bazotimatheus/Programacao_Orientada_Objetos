#include <iostream>
using namespace std;
class LivroDeNotas
{	public: //especificador de acesso
		void mostraMensagem()	//método
		{	
			cout<<"Livro de Notas"<<endl;
		}
};	//fim da classe

main()
{
	LivroDeNotas livro;	//cria o objeto livro
	livro.mostraMensagem();	//chama o método
}
