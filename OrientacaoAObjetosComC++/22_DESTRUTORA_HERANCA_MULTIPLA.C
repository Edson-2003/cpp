#include <iostream>

using namespace std;

class Uma
  {
  public:
    Uma(void)
      {
      cout << "Construtora para Uma\n"; 
      };
    ~Uma(void)
      {
      cout << "Destrutora para Uma\n"; 
      };
  };

class Duas 
  {
  public:
    Duas(void)
      {
      cout << "Construtora para Duas\n"; 
      };
    ~Duas(void)  
      {
      cout << "Destrutora para Duas\n"; 
      };
  };

class Tres
  {
  public:
    Tres(void)
      {
      cout << "Construtora para Tres\n";
      };
    ~Tres(void)  
      {
      cout << "Destrutora para Tres\n"; 
      };
  };

class Derivada: public Uma, public Duas, public Tres
  {
  public:
    Derivada(void) : Uma(), Duas(), Tres()
      {
      cout << "Construtora Derivada chamada\n"; 
      };
    ~Derivada(void)
      {
      cout << "Destrutora Derivada chamada\n"; 
      };
  };

int
main(void)
  {
  Derivada minha_classe;

  return(0);
  }

