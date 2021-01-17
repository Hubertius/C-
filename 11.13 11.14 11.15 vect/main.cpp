#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
  using namespace std;
  using vector::Vector;
  srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  unsigned long steps = 0;
  double target;
  double dstep;
  cout << "Podaj dystans do przejscia(k, aby zakonvczyc): ";
  while( cin >> target )
  {
    cout << "Podaj dlugosc kroku: ";
    if( !(cin >> dstep) )
    {
      break;
    }
    while(result.magval() < target )
    {
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      steps++;
    }
    cout << "Po " << steps << " krokach delikwent ";
    cout << "osiagnal polozenie:\n";
    cout << result << endl;
    result.polar_mode();
    cout << " czyli\n" << result << endl;
    cout << "Srednia dlugosc kroku pozornego = ";
    cout << result.magval() / steps << endl;
    steps = 0;
    result.reset(0.0, 0.0);
    cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
  }
  cout << "Koniec!\n";
  cin.clear();
  while(cin.get() != '\n' )
  {
    continue;
  }
  return 0;
}
