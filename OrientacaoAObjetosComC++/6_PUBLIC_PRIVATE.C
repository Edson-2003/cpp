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
    void exibe_livro(void) 
      {
      exibe_titulo(); 
      exibe_editora();
      };
    void atribui_editora(char *nome) 
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

int 
main(void)
  {
  Livro biblia;
  strcpy(biblia.titulo, "Biblia do Programador C/C++");
  strcpy(biblia.autor, "Jamsa e Klander");
  biblia.preco = 49.95;
  biblia.atribui_editora("Makron Books");

  biblia.exibe_livro();
  }

