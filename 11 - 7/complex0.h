#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex
{
  private:
    double re, im;
  public:
    Complex(double real = 1.0, double imaginary = 1.0);
    Complex operator+(const Complex obj_temp);
    Complex operator-(const Complex obj_temp);
    Complex operator*(const Complex obj_temp);
    friend Complex operator*(double value, const Complex obj_temp);
    friend Complex operator-(Complex obj_temp);
    friend std::istream & operator>>(std::istream & is, Complex & number);
    friend std::ostream & operator<<(std::ostream & is, const Complex & number);
    ~Complex();


};

#endif
