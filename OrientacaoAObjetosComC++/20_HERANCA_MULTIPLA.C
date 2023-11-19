#include <iostream>
#include <cstring>

using namespace std;

class Capa
  {
  public:
    Capa(char *titulo) 
      {
      strcpy(Capa::titulo, titulo); 
      };
  protected:
    char titulo[256];
  };

class Pagina
  {
  public:
    Pagina(int linhas = 55)
      {
      Pagina::linhas = linhas; 
      };
  protected:
    int linhas;
    char *texto;
  };

class Livro: public Capa, public Pagina 
  {
  public:
    Livro(char *autor, char *titulo, float custo): Capa(titulo), Pagina(60)
      {
      strcpy(Livro::autor, autor);
      strcpy(Livro::titulo, titulo);
      Livro::custo = custo; 
      };
    void exibe_Livro(void) 
      {
      cout << titulo << endl; 
      cout << autor << '\t' << custo << endl; 
      };
  private:
    char autor[256];
    float custo;
  };

int
main(void)
  {
  Livro texto("Jamsa e Klander", "Biblia do Programador C/C++", 49.95);

  texto.exibe_Livro();
  return(0);
  }

