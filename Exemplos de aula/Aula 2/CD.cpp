/*
	|-------------------------------|
	|	    CD			|
	|-------------------------------|
	|	+titulo:string		|
	|	+artista:string		|
	|	+ano:int		|
	|-------------------------------|
	|	+mostraCD():void	|
	|-------------------------------|
*/

#include<iostream>
#include<string>
using namespace std;
class CD
{
	public:
		string titulo;
		string artista;
		string ano;
	
		void mostraCD()
		{	cout<<"CD"<<endl;
		}
		
		void mostraTitulo(string titulo)
		{	cout<<"Titulo: "<<titulo<<endl;
		}
		
		void mostraArtista(string artista)
		{	cout<<"Artista: "<<artista<<endl;
		}
		
		void mostraAno(string ano)
		{	cout<<"Ano: "<<ano<<endl;
		}
};

main()
{
	CD cd;
	cd.titulo = "As melhores do axe da bahia";
	cd.artista = "E o tchan";
	cd.ano = "1990";
	
	cd.mostraCD();
	
	cout<<"Titulo: "<<cd.mostraTitulo()<<endl;
	cout<<"Artista: "<<cd.mostraArtista()<<endl;
	cout<<"Ano: "<<cd.mostraAno()<<endl;
}
