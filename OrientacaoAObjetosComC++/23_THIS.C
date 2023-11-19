#include <iostream>
#include <cstring>

using namespace std;

class AlgumaClasse 
  {
  public:
    void exibe_com_this(void)
      {
      cout << "Livro: " << this->titulo << endl;
      cout << "Autor: " << this->autor << endl; 
      };

   void exibe_sem_this(void) 
     {
     cout << "Livro: " << titulo << endl;
     cout << "Autor: " << autor << endl; 
     };

   AlgumaClasse(char *titulo, char *autor) 
     {
     strcpy(AlgumaClasse::titulo, titulo);
     strcpy(AlgumaClasse::autor, autor);
     };

  private:
    char titulo[256];
    char autor[256];
  };

int
main(void)
  {
  AlgumaClasse livro("Biblia do Programador C/C++","Jamsa e Klander");

  livro.exibe_com_this();
  livro.exibe_sem_this();
  return(0);
  }

