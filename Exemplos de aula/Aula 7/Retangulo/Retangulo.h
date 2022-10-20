class Quadrado;

class Retangulo
{
	private:
		int largura;
		int altura;
	public:
		int getLargura();
		int getAltura();
		void setLargura(int);
		void setAltura(int);
		int area();
		
		void converte(Quadrado);
		
		friend Retangulo duplicado(Retangulo);
};
