#include <iostream>
#include "operators.h"

int main()
{
  using std::cout;
  using std::endl;
  Time weeding(4, 35);
  Time waxing(2, 47);
  Time total;
  Time diff;
  Time adjusted;

  cout << "Czas pielenia = ";
  weeding.show();
  cout << endl;

  cout << "Czas woskowania = ";
  waxing.show();
  cout << endl;

  cout << "Laczny czas pracy = ";
  total = weeding + waxing;
  total.show();
  cout << endl;

  diff = weeding - waxing;
  cout << "Czas pielenia - czas woskowania = ";
  diff.show();
  cout << endl;

  adjusted = total * 1.5;
  cout << "Czas pracy z poprawka na przerwy = ";
  adjusted.show();
  cout << endl;
  
  return 0;
}
