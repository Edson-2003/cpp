#include <iostream>

using namespace std;

class Base 
  {
  public:
    Base(void) 
      {
      cout << "Construtora de classe-base\n";
      };
  };

class Derivada:Base 
  {
  public:
    Derivada(void): Base() 
      {
      cout << "Construtora de classe derivada\n";
      };
  };

int
main(void)
  {
  Derivada objeto;

  return(0);
  }

