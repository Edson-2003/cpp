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
    void exibe_Livro(void) 
      {
      cout << titulo << endl; 
      };
  private:
    char titulo[64];
  };

class Leitor
  {
  public:
    Leitor(char *nome) 
      {
      strcpy(Leitor::nome, nome); 
      };
    void exibe_Leitor(class Livro Livro)
      { 
      cout << "Leitor: " << nome << endl << "Livro: ";
      Livro.exibe_Livro();
      };
  private:
    char nome[64];
  };

int
main(void)
  {
  Leitor Leitor("Kris Jamsa");
  Livro favorite_Livro("Fundamentos Sobre Compiladores");

  Leitor.exibe_Leitor(favorite_Livro);
  return(0);
  }

