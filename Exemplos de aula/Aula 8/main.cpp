#include<iostream>
using namespace std;
#include "Time.h"
main()
{
	Time noite(18, 0, 0);		//objeto nao const
	const Time dia(5, 45, 0);	//objeto const
	
	//objeto constante e metodos constantes
	cout << dia.getHora() << endl;
	dia.imprimeUniversal();
	dia.imprimePadrao();
}
main()
{
	Time noite(18,0,0);		//objeto nao const
	const Time dia(5, 45, 0);	//objeto const
	
	noite.imprimePadrao();		//metodo const
	noite.imprimeUniversal();	//metodo const
	noite.setHora(20);		//metodo nao const
	noite.imprimeUniversal();	//metodo const
	noite.imprimePadrao();		//metodo const
}

main()
{
	Time noite(18,0,0);			//objeto nao const
	const Time dia(5, 45, 0);		//objeto const
	
	noite.setHora(20);			//metodo nao const
	cout << noite.getHora() << endl;	//metodo const
	cout << noite.getMinuto() << endl;	//metodo const
	
	//objeto constante nao pode ser modificado
	//dia.setHora(7);
}
