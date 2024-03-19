#include "vector.h"
using namespace std;

Vector2d::Vector2d() {
  x = 0;
  y = 0;
  direction = 0;
  magnitude = 0;
}

Vector2d::Vector2d(int& x_, int& y_) {
  this->x = x_;
  this->y = y_;
}

Vector2d::Vector2d(int& x, int& y, int& dir_, int& mag_) {
  this->x = x;
  this->y = y;
  this->direction = dir_;
  this->magnitude = mag_;
}

void Vector2d::setx(int& x_) {
  this->x = x_;
}

void Vector2d::sety(int& y_) {
  this->y = y_;
}

double Vector2d::getDirection(int& x_, int& y_) const {
  return direction;
}

double Vector2d::getMagnitude(int& x_, int& y_) const {
  return magnitude;
}

void Vector2d::normalize() {
  cout << "Normal vector is \n";
}

bool orthagonal_check(Vector2d& v1, Vector2d& v2) {
  int result = 0;
  return true;
}
