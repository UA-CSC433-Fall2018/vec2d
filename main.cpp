///
/// \file main.cpp
/// \brief 2D vector class example code
/// \author Joshua A. Levine <josh@email.arizona.edu>
/// \date 09/12/18
///
/// This code declares tests out our 2D vector class
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
