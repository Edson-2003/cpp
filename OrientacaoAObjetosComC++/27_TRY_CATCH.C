#include <iostream>

using namespace std;

int
main(void)
  {
  cout << "Inicio" << endl;
  try
    {
    cout << "Dentro do bloco de teste." << endl;
    throw 100;
    cout << "Isto nao ser  executado.";
    }
  catch(int i)
    {
    cout << "Peguei uma excecao -- o valor: ";
    cout << i << endl;
    }
  cout << "Fim";
  return(0);
  }
