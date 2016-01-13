///acesta este primul exemplu de typecast
/// si spatiere
///commit facut de Sergiu Duda

#include <iostream>
using namespace std;

class A {};

class B {
public:
  B (const A& x) {}
  B& operator= (const A& x) {return *this;}
  operator A() {return A();}
};
int main ()
{
  A foo;
  B bar = foo;
  bar = foo;
  foo = bar;
 return 0;
}
