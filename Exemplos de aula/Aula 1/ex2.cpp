#include<iostream>
using namespace std;
main()
{
	char nome[80];
	int idade;
	
	cout<<"Nome? ";
	//seta da string para a saída <<
	
	cin>>nome;
	//seta da entrada para variavel >>
	
	cout<<"Idade ?";
	cin>>idade;
	
	cout << "\n Ola, " << nome << ",tudo Ok aos ";
	cout << idade << " anos?\n" << endl;
}
