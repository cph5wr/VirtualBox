#include <iostream>
using namespace std;

class Person {
public:
  Person() {
    x=0;
  };
  Person(int num) {
    x=num;
  }
  virtual void blah() {
    cout << "Hello from the Person class." << endl;
  }
private:
  int x;
};

class Student : public Person {
public:
  Student(int num) {
    x=num;
  };
  void blah() {
    cout << "Hello from the Student class." << endl;
  };
private:
  int x;
};

int main () {
  Person * p = new Student(6);
  p->blah();
}
