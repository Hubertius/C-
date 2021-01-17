#include  "vect.h"
#include <cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace vector
{
  // przelicznik radianów na stopnie
  const double Rad_to_deg = 45.0 / atan(1.0);

  // oblicza długość wektora ze składowych
  void Vector::set_mag()
  {
    mag = sqrt( x * x + y * y );
  }

  void Vector::set_ang()
  {
    if( x == 0.0 && y == 0.0 )
    {
      ang = 0.0;
    }
    else
    {
      ang = atan2(y, x);
    }
  }

  // oblicz skladową x ze współrzędnych biegunowych
  void Vector::set_x()
  {
    y = mag * cos(ang);
  }

  //oblicz skladowa y ze wspolrzednych biegunowych
  void Vector::set_y()
  {
    y = mag * sin(ang);
  }

  // metody publiczne
  Vector::Vector()
  {
    x = y = mag = ang = 0.0;
    mode = RECT;
  }

  // konstruje wektor o zadanych wspolrzednych biegunowych (w trybie 'p')
  // badz prostokatnych (w domyslnym trybie 'r')
  Vector::Vector(double n1, double n2, Mode form)
  {
    mode = form;
    if( form == RECT )
    {
      x = n1;
      y = n2;
      set_mag();
      set_ang();
    }
    else if( form == POL )
    {
      mag = n1;
      ang = n2 / Rad_to_deg;
      set_x();
      set_y();

    }
    else
    {
      std::cout << "Niepoprawna wartosc trzeciego argumentu Vector() -- ";
      std::cout << "zeruje wektor\n";
      x = y = mag = ang = 0.0;
      mode = RECT;
    }
  }

  // zerowanie wartości dla wektora dla zadanych wspolrzednych kartezjanskich (dla RECT)
  void Vector::reset(double n1, double n2, Mode form)
  {
    mode = form;
    if( form == RECT )
    {
      x = n1;
      y = n2;
      set_mag();
      set_ang();
    }
    else if( form == POL )
    {
      mag = n1;
      ang = n2 / Rad_to_deg;
      set_x();
      set_y();
    }
    else
    {
      std::cout << "Niepoprawny trzeci argument set() -- ";
      std::cout << "zeruje wektor\n";
      x = y = mag = ang = 0.0;
      mode = RECT;
    }
  }

  void Vector::polar_mode() // przelacz do reprezentacji biegunowej;
  {
    mode = POL;
  }

  void Vector::rect_mode() // przelacz do reprezentacji kartezjanskiej
  {
    mode = RECT;
  }

  // przeciazone operatory

  // dodawanie dwoch wektorow

  Vector Vector::operator+(const Vector & b) const
  {
    return Vector(x + b.x, y + b.y);
  }

  // odejmowanie wektora b od a
  Vector Vector::operator-(const Vector & b) const
  {
    return Vector(x - b.x, y - b.y);
  }

  // zmienia znak wektora
  Vector Vector::operator-() const
  {
    return Vector(-x, -y);
  }

  //mnoży wektor wywolujacy przez n
  Vector Vector::operator*(double n) const
  {
    return Vector(n * x, n * y);
  }

  // funkcje zaprzyjaznione

  //mnoży n przez wektor a
  Vector operator*(double n, const Vector & a)
  {
    return a * n;
  }

  // wyswietla wspolrzedne wektora (prostokatne w trybie Rect)
  // biegunowe w trybie POL
  ostream & operator<<(ostream & os, const Vector & v)
  {
    if( v.mode == Vector::RECT )
    {
      os << "(x,y) = (" << v.x << ", " << v.y << ")";
    }
    else if( v.mode == Vector::POL )
    {
      os << "(m, a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
    }
    else
    {
      os << "Niepoprawny tryb reprezentacji obiektu wektora.";
    }
    return os;
  }

  Vector::~Vector() // destruktor
  {

  }
}
