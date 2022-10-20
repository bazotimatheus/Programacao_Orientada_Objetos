#include<string>
using namespace std;

class Professor:public Pessoa
{
	private:
		float salr;
		string form;
	public:
		Professor(float, string, string, string);
		void setForm(string);
		string getForm();
		void setSalr(float);
		float getSalr();
		//metodo para mostrar atributos do objeto 
		void mostraProfessor();
};
