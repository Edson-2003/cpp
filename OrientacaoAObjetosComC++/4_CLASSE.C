#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Livro 
  {
  public: 
    char titulo[256];
    char autor[64];
    float preco;
    void exibe_titulo(void)  
      {
      cout << titulo << '\n'; 
      };
    float pega_preco(void)  
      { 
      return(preco); 
      };
  };

int
main(void)
  {
  Livro dicas; 

  strcpy(dicas.titulo, "Biblia do Programador C/C++");
  strcpy(dicas.autor, "Jamsa e Klander");
  dicas.preco = 49.95;

  dicas.exibe_titulo();
  cout << "O preco do livro = " << setprecision(2) <<  dicas.pega_preco() << endl;
  return(0);
  }

