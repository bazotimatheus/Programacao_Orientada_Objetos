#include<iostream>
#include<string>
using namespace std;

#include "LivroDeNotas.h"

LivroDeNotas::LivroDeNotas(string nome)
{setNomeCurso(nome);}

void LivroDeNotas::setNomeCurso(string nome)
{nomeCurso = nome;}

string LivroDeNotas::getNomeCurso()
{return nomeCurso;}

void LivroDeNotas::mostraMensagem()
{cout << "Bem vindo ao Livro de Notas do Curso " << getNomeCurso() << "!" << endl;}
