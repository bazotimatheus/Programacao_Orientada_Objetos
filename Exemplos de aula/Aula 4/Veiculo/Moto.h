#include<iostream>
#include<string>
using namespace std;

class Moto: public Veiculo
{
	private:
		int temposMotor;
	public:
		int getTemposMotor()	{return tempos;}
		void setTempos(int tm)	{temposMotor = tm;}
};
