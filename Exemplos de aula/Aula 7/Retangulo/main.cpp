#include<iostream>
using namespace std;
#include "Retangulo.h"
#include "Quadrado.h"


	Retangulo duplicado(Retangulo r)
	{
		Retangulo result;
		result.largura = r.largura*2;
		result.altura = r.altura*2;
		return result;
	}

main()
{
	Retangulo ret1, ret2;
	ret1.setLargura(4);
	ret1.setAltura(5);
	
	cout << "Area ret1: " << ret1.area() << endl;
	
	ret2 = duplicado(ret1);
	
	cout << "Area ret2: " << ret2.area() << endl;	

	Quadrado quad;
	Retangulo ret;
	quad.setLado(4);
	ret.converte(quad);
	cout << "Area: " << ret.area() << endl;
}
