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
  protected:
    float custo;
    void exibe_custo(void) 
      {
      cout << custo << endl; 
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
      custo = 49.95;
      };
    void exibe_biblio(void) 
      { 
      exibe_titulo();
      exibe_custo();
      cout << autor << ' ' << editora << endl; 
      };
  private:
    char autor[64];
    char editora[64];
  };

int
main(void)
  {
  FichaBiblioteca ficha("B¡blia do Programador C/C++","Jamsa e Klander", "Jamsa Press");

  ficha.exibe_biblio();
  return(0);
  }

