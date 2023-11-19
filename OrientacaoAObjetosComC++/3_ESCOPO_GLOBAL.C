#include <iostream>

using namespace std;

int nome_global = 1001;

int
main(void)
  {
  int nome_global = 1;  // Variavel local 

  cout << "Valor da variavel local " << nome_global
       << '\n';
  cout << "Valor da variavel global " << ::nome_global
       << '\n';
  return(0);
  }
