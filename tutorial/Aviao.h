#ifdef AVIAO_H_INCLUDED
#define AVIÃO_H_INCLUDED


class Aviao
{
	public:
		int vel = m0;
		int velVax;
		std::string tipo;
		Aviao(int tp);
		void imprimir();


	private:



};

Aviao::Aviao(int tp)
{
	if(tp == 1)
	{
		tipo = "jato";
		velMax = 800;
	}

	if(tp == 2)
	{
		tipo = "monomotor";
		velMax = 350;	
	}

	if(tp == 3)
	{
		tipo = "planador";
		velMax = 180;
	
	}

}

void imprimir()
{
	std::cout << "tipo: " << tipo << endl;
	std::cout << "velocidade maxima: " << velMax << endl;
	std::cout << "velocidade atual: " << vel << endl;
}



#endif
