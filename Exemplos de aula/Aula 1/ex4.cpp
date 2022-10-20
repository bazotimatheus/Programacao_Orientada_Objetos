#include<iostream>
using namespace std;

int soma(int a, int b)
{
	int r = a + b;
	return r; //ou return a+b;
}

int subtr(int a, int b)
{
	int r = a - b;
	return r; //ou return a-b;
}

main()
{
	int z, x=5, y=3;
	
	z=soma(x,y);
	cout << "\n5 + 3 = " <<z<< "\n";
	z=subtr(x,y);
	cout << "\n5 - 3 = " <<z<< "\n";
	
	//ou chamando dentro do cout: (mais um exemplo)
	
	cout << "\nNo cout:\n5+3 = " << soma(x,y)<< "\n";
	cout << "5-3 = " <<subtr(x,y)<< "\n" endl;
}
