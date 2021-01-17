#ifndef VECT_H_
#define VECT_H_

#include <iostream>
using std::ostream;

namespace vector
{
  class Vector
  {
    public:
      enum Mode {RECT, POL}; // pierwsze to współrzędne kartezjańskie, drugie biegunowe
    private:
      double x; // wartość składowej poziomej
      double y; // wartość składowej pionowej
      double mag; // długość wektora
      double ang; // kierunek wektora (w stopniach)
      Mode mode; // RECT || POL
      void set_mag();
      void set_ang();
      void set_x();
      void set_y();
    public:
      Vector();
      Vector(double n1, double n2, Mode form = RECT);
      void reset(double n1, double n2, Mode form = RECT);
      double xval() const {return x;} // geter, zwraca wartosc skladowej x
      double yval() const {return y;} // geter, zwraca wartosc skladowej y
      double magval() const {return mag;} //geter, zwraca dlugosc
      double angval() const {return ang;} // geter, zwraca kąt
      void polar_mode(); // seter, ustawia tryb na biegunowy (POL)
      void rect_mode(); // seter, ustawia tryb na kartezjanski (RECT)

      // przeciazanie operatorow

      Vector operator+(const Vector & b) const;
      Vector operator-(const Vector & b) const;
      Vector operator-() const;
      Vector operator*(double n) const;

      // funkcje zaprzyjaźnione

      friend Vector operator*(double n, const Vector & a);
      friend ostream & operator<<(ostream & os, const Vector & v);

      // destruktor
      ~Vector();
  };
}

#endif
