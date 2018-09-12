///
/// \file vec2d.h
/// \brief 2D vector class
/// \author Joshua A. Levine <josh@email.arizona.edu>
/// \date 09/12/18
///
/// This code declares a simple vec2D class with some of the basic 
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



#pragma once  // prevent double includes

#include <iostream> // included for std::ostream



class vec2d {
  public:
    vec2d();
    vec2d(float x_, float y_);
    //copy constructor
    vec2d(const vec2d& v);

    //assignment operator
    vec2d& operator=(const vec2d& rhs);
    //arithmetic operations
    vec2d operator+(const vec2d& rhs);
    vec2d operator*(float s);

    //friend functions can access private members, but are defined
    //external to the class
    friend std::ostream& operator<<(std::ostream& os, const vec2d& obj);

  private:
    float x;
    float y;
};
