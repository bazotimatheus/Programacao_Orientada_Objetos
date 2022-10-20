#include<iostream>
using namespace std;
#include "Contador.h"

main()
{
	{
		Contador minutos(0);
		minutos.incrementa();
		cout << "Minutos: " << minutos.getNum() << endl;
		{
			Contador segundos(10);
			segundos.incrementa();
			cout << "Segundos: " << segundos.getNum() << endl;
		}
		minutos.incrementa();
	}
}
