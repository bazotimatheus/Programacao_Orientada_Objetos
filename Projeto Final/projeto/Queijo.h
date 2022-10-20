#ifndef QUEIJO_H
#define QUEIJO_H

class Queijo
{
	private:
		float peso;
	public:
		Queijo(float);
		~Queijo();
		float getPeso() const;
		void setPeso(float);
		friend class Presunto; //classe amiga
};

#endif
