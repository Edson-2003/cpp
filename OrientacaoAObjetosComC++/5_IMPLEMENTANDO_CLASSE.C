#include <iostream>
#include <cstring>

using namespace std;

class filme
  {
  public:
    char nome[64];
    char primeiro_astro[64];
    char segundo_astro[64]; 
    void exibe_filme(void);
    void inicializa(char *nome, char *primeiro, char *segundo);
  };

void
filme::exibe_filme(void)
  {
  cout << "Nome do filme: " << nome << endl;
  cout << "Estrelando: " << primeiro_astro << " e " << segundo_astro << endl << endl;
  }

void
filme::inicializa(char *filme_nome, char *primeiro, char *segundo)
 {
 strcpy(nome, filme_nome);
 strcpy(primeiro_astro, primeiro);
 strcpy(segundo_astro, segundo);
  }

int
main(void)
  {
  filme fugitivo, insone;

  fugitivo.inicializa("O Fugitivo", "Harrison Ford", "Tommy Lee Jones");
  insone.inicializa("Insone em Seattle", "Tom Hanks", "Meg Ryan");
  fugitivo.exibe_filme();
  insone.exibe_filme();
  return(0);
  }

