#include <iostream>
#include "vec2d.h"

int main(int argc, char** argv) {

  vec2d a;
  vec2d b(3,2);

  vec2d c = b;

  a = b + c*1.5;

  std::cout << a << " " << b << std::endl; 

  return 0;
}
