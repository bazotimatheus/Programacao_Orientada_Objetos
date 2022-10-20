#include<iostream>
using namespace std;

#include "Retangulo.h"

main()
{
	Retangulo ret1, ret2;
	ret1.setLargura(4);
	ret1.setAltura(5);
	
	cout << "Area ret1: " << ret1.area() << endl;
	
	ret2 = duplicando(ret1);
	
	cout << "Area ret2 (duplicado de ret1): " << ret2.area() << endl;
}
