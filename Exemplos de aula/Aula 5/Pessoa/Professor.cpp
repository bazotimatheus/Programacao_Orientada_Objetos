#include<iostream>
#include<string>
using namespace std;

#include "Pessoa.h"
#include "Professor.h"

Professor::Professor(float sal, string fo, string n, string f):Pessoa(n,f)
{
	setSalr(sal);
	setForm(fo);
}

float Professor::getSalr()		{return salr;}
string Professor::getForm()		{return form;}
void Professor::setSalr(float sal)	{salr = sal;}
void Professor::setForm(string fo)	{form = fo;}

//metodo para mostrar atributos do objeto 
void Professor::mostraProfessor()
{
	cout 	<< "\n Professor:\n"
		<< "\n Nome: " << getNome()
		<< "\n Formacao: " << getForm()
		<< "\n Salario: " << getSalr()
		<< "\n Fone: " << getFone()
		<< endl;
}
