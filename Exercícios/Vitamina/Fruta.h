#include<string>
using namespace std;

class Fruta
{
	private:
		string nome;
		int qnt;
	public:
		Fruta(string, int);
		~Fruta();
		string getNome();
		void setNome(string);
		int getQnt();
		void setQnt(int);
};
