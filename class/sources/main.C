#include <iostream>
#include <cstdlib>
using namespace std;


#include <string>
#include "headers/class.h"

int main()
{
	Person p1;
	Person p2;

	p1.setName("mark");
	p2.setName("steve");

	cout << p1.getName() << endl;
	cout << p2.getName() << endl;





	return 0;
}
