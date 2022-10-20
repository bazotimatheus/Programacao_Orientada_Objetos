#include<string>
using namespace std;

#include "Fruta.h"

	Fruta::Fruta(string n, int q){
		setNome(n);
		setQnt(q);
	}
	
	string Fruta::getNome()	{return nome;	}
	int Fruta::getQnt()	{return qnt;	}
	void Fruta::setNome(string){nome = n;	}
	void Fruta::setQnt(int)	{qnt = q;	}
