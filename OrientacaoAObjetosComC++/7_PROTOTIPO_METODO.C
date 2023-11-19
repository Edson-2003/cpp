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
    void exibe_titulo(void);
    float pega_preco(void);
    void exibe_Livro(void);
    void atribui_editora(char *nome);
  private:
    char editora[256];
    void exibe_editora(void); 
  };

void 
Livro::exibe_titulo(void) 
  {
  cout << titulo << '\n'; 
  };

float 
Livro::pega_preco(void) 
  {
  return(preco); 
  };

void 
Livro::exibe_Livro(void) 
  {
  exibe_titulo(); 
  exibe_editora();
  };

void 
Livro::atribui_editora(char *nome) 
  {
  strcpy(editora, nome); 
  };

void Livro::exibe_editora(void) 
  {
  cout << editora << '\n'; 
  };

int
main(void)
  {
  Livro dicas; 

  strcpy(dicas.titulo, "B¡blia do Programador C/C++!");
  strcpy(dicas.autor, "Jamsa e Klander");
  dicas.preco = 49.95;
  dicas.atribui_editora("Makron Books");

  dicas.exibe_Livro();
  return(0);
  }

