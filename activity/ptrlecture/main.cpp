#include <iostream>

using namespace std;

int main() {
  int a = 5;
  int* p;
  p = &a;

  cout << "a: " << a << endl;
  cout << "&a: " << &a << endl;
  cout << "Address of p: " << &p << endl;
  return 0;
}
