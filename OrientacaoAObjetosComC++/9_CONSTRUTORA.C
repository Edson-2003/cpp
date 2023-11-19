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

    Livro(char *ltitulo, char *lautor, char *leditora, float lpreco);

    void exibe_titulo(void) 
      {
      cout << titulo << '\n'; 
      };

    float pega_preco(void)
      {
      return(preco); 
      };

    void exibe_livro(void)
      {
      exibe_titulo();
      exibe_editora();
      };

    void assign_editora(char *nome) 
      {
      strcpy(editora, nome); 
      };

  private:
    char editora[256];

    void exibe_editora(void) 
      {
      cout << editora << '\n'; 
      };
  };

Livro::Livro(char *ltitulo, char *lautor, char *leditora, float lpreco)
  {
  strcpy(titulo, ltitulo);
  strcpy(autor, lautor);
  strcpy(editora, leditora);
  preco = lpreco;
  }

int
main(void)
  {
  Livro dicas("B¡blia do Programador C/C++, do Jamsa!", "Jamsa e Klander", "Makron Books", 49.95);
  Livro diario("Todos os Meus Segredos...", "Kris Jamsa", "Nenhuma", 9.95);

  dicas.exibe_livro();
  diario.exibe_livro();
  return(0);
  }
