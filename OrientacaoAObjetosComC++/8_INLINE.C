#include <iostream>
#include <cstring>

using namespace std;

class filme 
  {
  public:
    char nome[64];
    char primeiro_astro[64];
    char segundo_astro[64]; 

    void exibe_filme(void)
      {
      cout << "Nome do filme: " << nome << endl;
      cout << "Estrelando: " << primeiro_astro << " e " << segundo_astro << endl << endl;
      }

  void inicializa(char *filme_nome, char *primeiro, char *segundo)
    {
    strcpy(nome, filme_nome);
    strcpy(primeiro_astro, primeiro);
    strcpy(segundo_astro, segundo);
    }
  };

int
main(void)
  {
  filme fugitivo, insone;

  fugitivo.inicializa("O Fugitivo", "Harrison Ford", "Tommy Lee Jones");
  insone.inicializa("Insone em Seattle", "Tom Hanks", "Meg Ryan");
  cout << "Os dois ultimos filmes que assisti forma: " << fugitivo.nome  << " e " << insone.nome << endl;
  cout << "Achei que o " << fugitivo.primeiro_astro << " estava otimo!" << endl;
  return(0);
  }
