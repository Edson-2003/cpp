#include <iostream>
#include <iomanip>

using namespace std;

class NumerosMagicos 
  {
  public:
    NumerosMagicos(int a = 1, int b = 2, int c = 3)
      {
      NumerosMagicos::a = a; 
      NumerosMagicos::b = b;
      NumerosMagicos::c = c;
      };

    void exibe_numeros(void)
      {
      cout << a << ' ' << b << ' '<< c << '\n'; 
      };

  private:
    int a, b, c;
  };

int
main(void)
  {
  NumerosMagicos um(1, 1, 1);
  NumerosMagicos padroes;
  NumerosMagicos happy(101, 101, 101);

  um.exibe_numeros();
  padroes.exibe_numeros();
  happy.exibe_numeros();
  return(0);
  }

