#include <iostream>
//#include <cstring>

using namespace std;

class Base
  {
  public:
    virtual void exibe_mensa(void) 
      {
      cout << "Mensagem da classe-base" << endl; 
      };
    virtual void exibe_inverso(void) = 0;
  };

class Derivada : public Base
  {
  public:
    virtual void exibe_mensa(void) 
      {
      cout << "Mensagem da classe derivada" << endl; 
      };
    virtual void exibe_inverso(void) 
      {
      cout << "adavired essalc ad megasneM" << endl; 
      };
  };

int
main(void)
  {
  Base *poli = new Derivada;

  poli->exibe_mensa();
  poli->exibe_inverso();
  return(0);
  }

