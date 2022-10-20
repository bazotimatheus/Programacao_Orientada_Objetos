#include<string>
using namespace std;

class Pessoa
{
	private:
		string nome;
		string fone;
	
	public:
		Pessoa(string, string);
		void setNome(string);
		string getNome();
		void setFone(string);
		string getFone();
};
