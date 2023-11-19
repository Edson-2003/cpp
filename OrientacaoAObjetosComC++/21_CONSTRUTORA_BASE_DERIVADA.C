#include <iostream>

using namespace std;

class Uma 
  {
  public:
    Uma(void)
      {
      cout << "Construtora para Uma\n"; 
      };
  };

class Duas
  {
  public:
    Duas(void)
      {
      cout << "Construtora para Duas\n";
      };
  };

class Tres
  {
  public:
    Tres(void)
      {
      cout << "Construtora para Tres\n"; 
      };
  };

class Derivada: public Uma, public Tres, public Duas
  {
  public:
    Derivada(void) : Uma(), Duas(), Tres() 
      {
      cout << "Construtora Derivada chamada\n"; 
      };
  };

int
main(void)
  {
  Derivada minha_classe;
  
  return(0);
  }
