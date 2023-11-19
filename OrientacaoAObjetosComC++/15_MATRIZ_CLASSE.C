#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Livro
  {
  public:
    void exibe_titulo(void) 
      {
      cout << titulo << '\n'; 
      };
    void exibe_livro(void)
      {
      exibe_titulo();
      exibe_editora();
      };
    void atribui_membros(char *, char *, char *, float);
  private:
    char titulo[256];
    char autor[64];
    float preco;
    char editora[256];

    void exibe_editora(void)
      {
      cout << editora << '\n'; 
      };
  };

void Livro::atribui_membros(char *titulo, char *autor, char *editora, float preco)
  {
  strcpy(Livro::titulo, titulo);
  strcpy(Livro::autor, autor);
  strcpy(Livro::editora, editora);
  Livro::preco = preco;
  }

int
main(void)
  {
  Livro Biblio[4];

  Biblio[0].atribui_membros("Biblia do Programador C/C++", "Jamsa e Klander", "Makron Books", 49.95);
  Biblio[1].atribui_membros("Banco de Dados com VB 5", "Ganz", "Makron Books", 54.95);
  Biblio[2].atribui_membros("C++ Completo e Total", "Schildt", "Makron Books", 49.95);
  Biblio[3].atribui_membros("Aprendendo C++", "Jamsa", "Makron Books", 24.95);

  for (int i = 0; i < 4; i++)
    {
    Biblio[i].exibe_livro();
    }
  return(0);
  }

