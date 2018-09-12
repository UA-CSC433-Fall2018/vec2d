#include "vec2d.h"

#include <iostream>

vec2d::vec2d() {
  std::cout << "default constructor" << std::endl;
  x = 0; y = 0;
}

vec2d::vec2d(float x_, float y_) {
  std::cout << "parameterized constructor" << std::endl;
  x = x_; y = y_;
}

vec2d::vec2d(const vec2d& v) {
  std::cout << "copy constructor" << std::endl;
  x = v.x;
  y = v.y;
}


vec2d& vec2d::operator=(const vec2d& rhs) {
  std::cout << "assignment operator" << std::endl;
  x = rhs.x;
  y = rhs.y;

  return *this;
}

vec2d vec2d::operator+(const vec2d& rhs) {
  vec2d to_return;

  to_return.x = x + rhs.x;
  to_return.y = y + rhs.y;

  return to_return;
}

vec2d vec2d::operator*(float s) {
  vec2d to_return(*this);

  to_return.x *= s;
  to_return.y *= s;

  return to_return;
}


std::ostream& operator<<(std::ostream& os, const vec2d& obj) {
  os << "(" << obj.x << "," << obj.y << ")";
  
  return os;
}


