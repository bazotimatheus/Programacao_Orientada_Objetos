#include<string>
using namespace std;

class Aluno:public Pessoa
{
	private:
		int matr;
		float media;
	public:
		Aluno(int, float, string, string);
		void setMedia(float);
		float getMedia();
		void setMatr(int);
		int getMatr();
		//metodo para mostrar atributos do objeto 
		void mostraAluno();
};
