#include <iostream>
using namespace std;

template <typename T> // could be class T
void Swap(T &a, T &b);

int main()
{
  int i = 10;
  int j = 20;
  cout << "i, j = " << i << ", " << j << endl;
  cout << "Uzycie funkcji obslugujacej typ int, ";
  cout << "wygenerowanej przez kompilator.\n";
  Swap(i,j); // generuje void Swap(int &x, int &y);
  cout << "Teraz i, j = " << i << ", " << j << endl;

  double x = 24.5;
  double y = 81.7;

  cout << "x, y = " << x << ", " << y << endl;
  cout << "Uzycie funkcji obslugujacej typu double WYGENEROWANEJ przez KOMPILATOR.\n";
  Swap(x, y); // generuje void Swap(double &x, double &y);
  cout << "Teraz x, y = " << x << ", " << y << endl;
  return 0;
}

template <typename T> // could be class T
void Swap(T &a, T &b)
{
  T temp; // zmienna temp typu T
  temp = a;
  a = b;
  b = temp;
}
