/*
---------------------------------
|	Agenda			|
|-------------------------------|
|-nome:string			|
|-email:string			|
|-fone:string			|
|-------------------------------|
|+getNome():string		|
|+getEmail():string		|
|+getFone():inteiro		|
|+setNome(n:string):void	|
|+setEmail(e:string):void	|
|+setFone(f:string):void	|
|-------------------------------|
*/
#include<iostream>
#include<string>
using namespace std;

class Pessoa
{
	private:
		string nome, email;
		int fone;
	public:
		//getters
		string getNome()
		{
			return nome;
		}
		string getEmail()
		{
			return email;
		}
		int getFone()
		{
			return fone;
		}
		
		//setters
		void setNome(string n)
		{
			nome=n;
		}
		void setEmail(string e)
		{
			email=e;
		}
		void setFone(int f)
		{
			fone=f;
		}
};

main()
{
	Pessoa p1;
	
	p1.setNome("matheus");
	p1.setEmail("matheus@iduff");
	p1.setFone(11111111);
	
	cout << "Pessoa 1\n\nNome: " <<p1.getNome()<< "\nEmail: " <<p1.getEmail()<< "\nFone: " <<p1.getFone()<< "\n" << endl;
	
	Pessoa p2;
		
	p2.setNome("joao");
	p2.setEmail("joao@iduff");
	p2.setFone(22222222);
	
	cout << "Pessoa 2\n\nNome: " <<p2.getNome()<< "\nEmail: " <<p2.getEmail()<< "\nFone: " <<p2.getFone()<< "\n" << endl;
	
	Pessoa p3;
	
	p3.setNome("victoria");
	p3.setEmail("victoria@iduff");
	p3.setFone(33333333);
	
	cout << "Pessoa 3\n\nNome: " <<p3.getNome()<< "\nEmail: " <<p3.getEmail()<< "\nFone: " <<p3.getFone()<< "\n" << endl;
}
