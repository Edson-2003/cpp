#include <iostream>

using namespace std;

bool 
func(void)
  {                    // A funcao retorna um tipo bool
  return false;
  //  return NULL;  // NULL e convertido para booleano false
  }

int
main(void)
  {
  bool val = false;  // Vari vel booleana
  int i = 1;         // i nao nem o booleando True nem o booleano False 

  int g = 3;
  int *iptr = 0;     // ponteiro null
  float j = 1.01;    // j nao nem booleano True nem o booleano False

  if (i == true)
    {
    cout << "True: valor = 1" << endl;
    }
  if (i == false)
    {
    cout << "False: valor = 0" << endl;
    }
  if (g)
    {
    cout << "g = true.";
    }
  else
    {
    cout << "g = false.";
    }

   // Teste no ponteiro
  if (*iptr == false)
    {
    cout << "Ponteiro inv lido." << endl;
    }
  if (*iptr == true)
    {
    cout << "Ponteiro v lido." << endl;
    }

   // Para testar o valor verdadeiro de j, converta-o para 
   // o tipo bool.
  if (bool(j) == true)
    {
    cout << "O booleano j = True." << endl;
    }

   // Testa o valor de retorno da funcao booleana 

  val = func();
  if (val == false)
    {
    cout << "func() retornou False.";
    }
  if (val == true)
    {
    cout << "func() retornou True.";
    }
  return(0);
  }
