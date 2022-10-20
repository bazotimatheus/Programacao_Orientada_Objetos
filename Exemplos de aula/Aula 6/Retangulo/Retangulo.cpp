using namespace std;
#include "Retangulo.h"

	int Retangulo::getLargura()	{return largura;	}
	void Retangulo::setLargura(int)	{largura = l;	}
	int Retangulo::getAltura()	{return altura;	}
	void Retangulo::setAltura(int)	{altura = a;	}
	int Retangulo::area()	{return(altura*largura;	}
	
	Retangulo duplicado(Retangulo r)
	{
		Retangulo result;
		result.largura = r.largura*2;
		result.altura = r.altura*2;
		return result;
	}
