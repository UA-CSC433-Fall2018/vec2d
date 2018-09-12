///
/// \file vec2d.cpp
/// \brief 2D vector class
/// \author Joshua A. Levine <josh@email.arizona.edu>
/// \date 09/12/18
///
/// This code defines a simple vec2D class with some of the basic 
/// operations for arithmetic and utility functions. 
///


/*
 ***********************************************************************
 
 Copyright (C) 2018, Joshua A. Levine
 University of Arizona
 
 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including
 without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to
 the following conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 
 ***********************************************************************
 */



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


//return *this is a typical assignment operator syntax, so that you can
//chain multiple assignments, e.g. a = b = c
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
  //print to stream in a pretty format
  os << "(" << obj.x << "," << obj.y << ")";
  
  return os;
}


