#include <iostream>


class Coordenada
{
	private:
		float x, y;
	
	public:
		void set_coordenada(float new_x, float new_y);
		void show();
};


void Coordenada::set_coordenada(float new_x, float new_y)
{
	x = new_x;
	y = new_y;
}



void Coordenada::show()
{
	std::cout << x << " " << y << std::endl; 
	
}

int main()
{	

	int a, b;

	std::cin >> a;
	std::cin >> b;

	Coordenada c;
	c.set_coordenada(a,b);
	c.show();

	return 0;
}





