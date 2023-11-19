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
    Livro(char *titulo, char *autor, char *editora, float preco);
    ~Livro(void);
    void exibe_titulo(void) 
      {
      cout << titulo << '\n';
      };
    float obtem_preco(void) 
      {
      return(preco); 
      };
    void exibe_Livro(void) 
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

Livro::Livro(char *titulo, char *autor, char *editora, float preco)
  {
  strcpy(Livro::titulo, titulo);
  strcpy(Livro::autor, autor);
  strcpy(Livro::editora, editora);
  Livro::preco = preco;
  }

Livro::~Livro(void)
  {
  cout << "Destruindo a ocorrencia " << titulo << '\n';
  }

int
main(void)
  {
  Livro dicas("B¡blia do Programador C/C++", "Jamsa e Klander", "Makron Books", 49.95);
  Livro diario("Todos os Meus Segredos...", "Kris Jamsa","Nenhuma", 9.95);

  dicas.exibe_Livro();
  diario.exibe_Livro();
  return(0);
  }

