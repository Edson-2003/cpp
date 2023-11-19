#include <iostream>
#define TAM_MATRIZ 100

using namespace std;

class pilha 
  {
  int plh[TAM_MATRIZ];
  int pilha_topo;
  public:
    pilha();
    ~pilha();
    void push(int i);
    int pop();
  };

pilha::pilha(void)
  {
  pilha_topo = 0;
  cout << "Pilha Inicializada" << endl;
  }

pilha::~pilha(void)
  {
  cout << "Pilha Destruida" << endl;
  }

void 
pilha::push(int i)
  {
  if (pilha_topo==TAM_MATRIZ)
    {
    cout << "A pilha esta cheia." << endl;
    return;
    }
  plh[pilha_topo] = i;
  pilha_topo++;
  }

int 
pilha::pop(void)
  {
  if (pilha_topo==0)
    {
    cout << "Estouro da pilha." << endl;
    return 0;
    }
  pilha_topo--;
  return plh[pilha_topo];
  }

int
main(void)
  {
  pilha obj1, obj2;

  obj1.push(1);
  obj2.push(2);
  obj1.push(3);
  obj2.push(4);
  cout << obj1.pop() << endl;
  cout << obj1.pop() << endl;
  cout << obj2.pop() << endl;
  cout << obj2.pop() << endl;
  return(0);
  }
