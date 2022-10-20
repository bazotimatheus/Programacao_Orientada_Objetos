using namespace std;

class Contador
{
	private:
		int num;
	public:
		Contador(int);
		~Contador();
		void incrementa();
		int getNum();
		void setNum(int);
};
