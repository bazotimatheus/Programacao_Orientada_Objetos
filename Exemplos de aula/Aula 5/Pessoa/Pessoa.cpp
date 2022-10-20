#include<string>
using namespace std;

#include "Pessoa.h"

Pessoa::Pessoa(string n, string f)
{
	setNome(n);
	setFone(f);
}

string Pessoa::getNome()	{return nome;}
string Pessoa::getFone()	{return fone;}
void Pessoa::setNome(string n)	{nome = n;}
void Pessoa::setFone(string f)	{fone = f;}
