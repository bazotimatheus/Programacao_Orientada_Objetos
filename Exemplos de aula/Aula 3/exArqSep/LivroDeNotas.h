#include<iostream>
#include<string>
using namespace std;

class LivroDeNotas
{	private:
		string nomeCurso;
		
	public:
		LivroDeNotas (string nome){	setNomeCurso(nome);}
		
		void setNomeCurso(string nome){	nomeCurso=nome;}
		
		string getNomeCurso(){	return nomeCurso;}
};
