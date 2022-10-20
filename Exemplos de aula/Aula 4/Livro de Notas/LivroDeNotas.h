#include<string>
using namespace std;

class LivroDeNotas
{
	private:
		string nomeCurso;
	public:
		LivroDeNotas(string); //metodo construtor
		void setNomeCurso(string);
		string getNomeCurso();
		void mostraMensagem();
};
