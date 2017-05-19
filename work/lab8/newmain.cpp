#include <iostream>
using namespace std;

class Obj {
public:
  Obj(int val, bool bl);
  int getX();
  bool getB();
private:
  int x;
  bool b;
};

Obj::Obj(int val, bool bl) {
  x=val;
  b=bl;
}

int Obj::getX() {
  return x;
}

bool Obj::getB() {
  return b;
}

int main() {
  Obj o = Obj(5,true);
  o.getX();
}
