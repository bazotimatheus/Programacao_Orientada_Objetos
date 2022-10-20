#ifndef MOTO_H
#define MOTO_H

#include<string>
using namespace std;

class Moto:public Veiculo
{
	private:
		int temposMotor;
	public:
		Moto(string, int, float, int);
		~Moto();
		int getTemposMotor();
		void setTemposMotor(int);
};

#endif
