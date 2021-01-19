#include <iostream>
#include "complex0.h"

int main()
{
  using namespace std;
  Complex a(3.0, 4.0);
  Complex c;
  cout << "Podaj liczbe zespolona:\n";
  cin >> c;
  cout << "c to " << c << '\n';
  cout << "Sprzezona z c to " << -c << '\n';
  cout << "a to " << a << '\n';
  cout << "a + c wynosi " << a + c << '\n';
  cout << "a - c wynosi " << a - c << '\n';
  cout << "a * c wynosi " << a * c << '\n';
  cout << "2 * c wynosi " << 2 * c << '\n';
  cout << "KONIEC";
  return 0;
}
