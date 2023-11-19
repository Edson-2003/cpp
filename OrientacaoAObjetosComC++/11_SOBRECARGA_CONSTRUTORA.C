#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

using namespace std;

class Livros
  {
  public:
    Livros(char *titulo, char *autor, char *editora, float preco);
    Livros(void);
    void exibe_titulo(void)
      {
      cout << titulo << '\n'; 
      };
    float pega_preco(void)
      {
      return(preco); 
      };
    void exibe_Livros(void) 
      {
      exibe_titulo(); 
      exibe_editora();
      };
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

Livros::Livros(char *titulo, char *autor, char *editora, float preco)
  {
  strcpy(Livros::titulo, titulo);
  strcpy(Livros::autor, autor);
  strcpy(Livros::editora, editora);
  Livros::preco = preco;
  }

Livros::Livros(void)
  {
  cerr << "Voce precisa especificar os valores iniciais " << "para a ocorrencia Livros\n";
   exit(1);
  }

int
main(void)
  {
  Livros dicas("B¡blia do Programador C/C++", "Jamsa e Klander", "Jamsa Press", 49.95);
  Livros diario;

  dicas.exibe_Livros();
  diario.exibe_Livros();
  return(0);
  }

