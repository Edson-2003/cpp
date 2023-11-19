#include <iostream>

using namespace std;

class Base
  {
  public:
    virtual void exibe_mensa(void) 
      {
      cout << "Esta e a classe-base\n"; 
      };
  };

class Derivada: public Base 
  {
  public:
    virtual void exibe_mensa(void) 
      {
      cout << "Esta e a classe derivada\n" ; 
      };
  };

int
main(void)
  {
  Base *ponteiro_base = new Base;
  ponteiro_base->exibe_mensa();

  ponteiro_base = new Derivada;
  ponteiro_base->exibe_mensa();
  return(0);
  }

