#include<iostream>
#include<string>
using namespace std;

#include "Pessoa.h"
#include "Aluno.h"

Aluno::Aluno(int ma, float me, string n, string f):Pessoa(n,f)
{
	setMedia(me);
	setMatr(ma);
}

int Aluno::getMatr()		{return matr;}
float Aluno::getMedia()		{return media;}
void Aluno::setMatr(int ma)	{matr = ma;}
void Aluno::setMedia(float me)	{media = me;}

//metodo para mostrar atributos do objeto 
void Aluno::mostraAluno()
{
	cout 	<< "\n Aluno:\n"
		<< "\n Matricula: " << getMatr()
		<< "\n Nome: " << getNome()
		<< "\n Media: " << getMedia()
		<< "\n Fone: " << getFone()
		<< endl;
}
