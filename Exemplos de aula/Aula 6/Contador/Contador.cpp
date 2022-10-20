#include<iostream>
using namespace std;
#include "Contador.h"

	Contador::Contador(int n)	{setNum(n);	}
	Contador::~Contador()		{cout << "Contador destruido" << num << endl;	}
	void Contador::incrementa()	{num++;	}
	int Contador::getNum()		{return num;	}
	void Contador::setNum(int n)	{num = n;	}
