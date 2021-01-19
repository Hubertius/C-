#include <iostream>
#include "complex0.h"


Complex::Complex(double real, double imaginary)
{
  re = real;
  im = imaginary;
}

Complex Complex::operator+(Complex obj_temp)
{
  Complex temp;
  temp.re = re + obj_temp.re;
  temp.im = im + obj_temp.im;
  return temp;
}

Complex Complex::operator-(Complex obj_temp)
{
  Complex temp;
  temp.re = re - obj_temp.re;
  temp.im = im - obj_temp.im;
  return temp;
}

Complex Complex::operator*(const Complex obj_temp)
{
  Complex temp;
  temp.re = (re * obj_temp.re) - (im * obj_temp.im);
  temp.im - (re * obj_temp.im) + (im * obj_temp.re);
  return temp;
}

Complex operator*(double value, const Complex obj_temp)
{
  Complex temp;
  temp.re = value * obj_temp.re;
  temp.im = value * obj_temp.im;
  return temp;
}

Complex operator-(Complex obj_temp)
{
  Complex temp;
  temp.re = obj_temp.re;
  temp.im = -1 * obj_temp.im;
  return temp;
}

std::istream & operator>>(std::istream & is, Complex & number)
{
  using std::endl;
  using std::cout;
  cout << "Skladowa rzeczywista: ";
  while( !(is >> number.re) )
  {
    is.clear();
    while( is.get() != '\n' )
      continue;
    cout << "ERROR! Try again!" << endl;
    cout << "Skladowa rzeczywista: ";
  }

  std::cout << "Skladowa urojona: ";
  while( !(is >> number.im) )
  {
    is.clear();
    while( is.get() != '\n' )
      continue;
    cout << "ERROR! Try again!" << endl;
    cout << "Skladowa urojona: ";
  }
  return is;
}

std::ostream & operator<<(std::ostream & os, const Complex & number)
{
  using std::cout;
  using std::endl;
  os << "(" << number.re << ", " << number.im << "i)" << endl;
  return os;
}
Complex::~Complex()
{

}
