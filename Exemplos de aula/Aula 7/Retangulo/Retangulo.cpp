#include "Retangulo.h"
#include "Quadrado.h"

	int Retangulo::getLargura()		{return largura;	}
	void Retangulo::setLargura(int l)	{largura = l;		}
	int Retangulo::getAltura()		{return altura;		}
	void Retangulo::setAltura(int a)	{altura = a;		}
	int Retangulo::area()			{return(largura*altura);}
	
	void Retangulo::converte(Quadrado q)
	{
		largura = q.lado;
		altura = q.lado;
	}
