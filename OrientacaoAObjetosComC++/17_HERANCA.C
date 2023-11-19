#include <iostream>
#include <cstring>

using namespace std;

class Livro
  {
  public:
    Livro(char *titulo) 
      {
      strcpy(Livro::titulo, titulo);
      };
    void exibe_titulo(void) 
      {
      cout << titulo << endl;
      };
  private:
    char titulo[64];
  };

class FichaBiblioteca : public Livro 
  {
  public:
    FichaBiblioteca(char *titulo, char *autor, char *editora) : Livro(titulo) 
      {
      strcpy(FichaBiblioteca::autor, autor);
      strcpy(FichaBiblioteca::editora, editora);
      };
    void exibe_biblio(void) 
      {
      exibe_titulo();
      cout << autor << ' ' << editora;
      };
  private:
    char autor[64];
    char editora[64];
  };

int
main(void)
  {
  FichaBiblioteca ficha("Biblia do Programador C/C++", "Jamsa e Klander","Makron Books");

  ficha.exibe_biblio();
  return(0);
  }

