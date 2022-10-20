#include<iostream>
using namespace std;

int soma(int x, int y)
{	
	int r = x+y;
	return(r); //return(x+y)
}

int subtr(int x, int y)
{
	int r = x-y;
	return(r); //return(x-y)
}

int mult(int x, int y)
{
	int r = x*y;
	return(r); //return(x*y)
}

int div(int x, int y)
{
	int r = x/y;
	return(r); //return(x/y)
}

main()
{
	int z, x, y, exp1, exp2;
	
	cout<<"\nInforme x ";
	cin>>x;
	cout<<"\nInforme y ";
	cin>>y;
	
	z=soma(x,y);
	cout<<"\nA soma da: "<<z<<"\n";
	z=subtr(x,y);
	cout<<"\nA subtracao da: "<<z<<"\n";
	z=mult(x,y);
	cout<<"\nA multiplicacao da: "<<z<<"\n";
	z=div(x,y);
	cout<<"\nA divisao da: "<<z<<"\n";
	
	exp1= soma(x,y)*subtr(x,y);
	cout<<"\nA expressao 1 da: "<<exp1<<"\n";
	
	exp2= mult(x,y)+div(x,y);
	cout<<"\nA expressao 2 da: "<<exp2<<"\n"endl;
}
