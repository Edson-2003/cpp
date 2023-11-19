#include <iostream>
#include <cstdlib>

using namespace std;

class Base
  {
  public:
    virtual int soma(int a, int b) 
      {
      return(a + b); 
      };
    virtual int sub(int a, int b)
      {
      return(a - b); 
      };
    virtual int mult(int a, int b)
      {
      return(a * b); 
      };
  };

class ExibeMat : public Base 
  {
  virtual int mult(int a, int b) 
    {
      cout << a * b << endl; 
      return(a * b); 
    };
  };

class SubtPositiva : public Base
  {
  virtual int sub(int a, int b)
    {
    return(abs(a - b)); 
    };
  };

int
main(void)
  {
  Base *poli = new ExibeMat;

  cout << poli->soma(562, 531) << ' ' << poli->sub(1500, 407) << endl; 
  poli->mult(1093, 1);

  poli = new SubtPositiva;
  cout << poli->soma(892, 201) << ' ' << poli->sub(0, 1093) << endl;
  cout << poli->mult(1, 1093);
  return(0);
  }

