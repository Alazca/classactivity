#ifndef VECTOR_HPP_
#define VECTOR_HPP_

#include <cmath>
#include <iostream>
using namespace std;

class Vector2d {
private:
  int x;
  int y;
  double direction;
  double magnitude;

public:
  Vector2d();
  Vector2d(int&, int&);
  Vector2d(int&, int&, int&, int&);
  void setx(int&);
  void sety(int&);
  Vector2d dotProduct(Vector2d, Vector2d);
  int crossProduct(Vector2d, Vector2d);
  double getDirection(int&, int&) const;
  double getMagnitude(int&, int&) const;
  virtual void display();
  friend ostream& operator<<(ostream&, Vector2d);
  friend ostream& operator+(Vector2d, Vector2d);
  friend ostream& operator>>(istream&, Vector2d);

protected:
  void normalize();
  bool orthagonal_check(Vector2d&, Vector2d&);
};

class unitVector : public Vector2d {
  unitVector(int&, int&);
};

#endif
