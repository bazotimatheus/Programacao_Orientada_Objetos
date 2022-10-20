using namespace std;

class Retangulo
{
	private:
		int largura;
		int altura;
	public:
		int getLargura();
		void setLargura(int);
		int getAltura();
		void setAltura(int);
		int area();
	friend Retangulo duplicado(Retangulo);
};
