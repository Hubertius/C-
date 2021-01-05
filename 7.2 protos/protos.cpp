#include <iostream>
using namespace std;

void cheers(int); //prototyp: brak wartości zwracanej
double cube(double x); //prototyp: zwracana wartosc double

int main()
{
  cheers(5);
  cout << "Podaj liczbe: ";
  double side;
  cin >> side;
  double volume = cube(side); //wywolanie funkcji
  cout << "Kostka majaca bok " << side << " cm ma pojemnosc ";
  cout << volume << " centymetrow szesciennych.\n";
  cheers(cube(2)); //dziala ochrona prototypu;
}

void cheers(int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << "Czesc!" << endl;
  }
}

double cube(double x)
{
  return x * x * x;
}
