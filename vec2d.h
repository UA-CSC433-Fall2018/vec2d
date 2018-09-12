#pragma once

#include <iostream>

class vec2d {
  public:
    vec2d();
    vec2d(float x_, float y_);
    vec2d(const vec2d& v);

    vec2d& operator=(const vec2d& rhs);
    vec2d operator+(const vec2d& rhs);
    vec2d operator*(float s);

    friend std::ostream& operator<<(std::ostream& os, const vec2d& obj);



  private:
    float x;
    float y;


};
