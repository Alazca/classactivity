#include <iostream>
using namespace std;

class Base {
private:
  int b1;
  int b2;

public:
  Base();
  void print();
};

class Derived : public Base {};
void Base::print() {
  cout << "In Base" << endl;
}

int main() {
  return 0;
}
