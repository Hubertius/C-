#include <iostream>
#include "operatorPlus.h"

int main()
{
  using std::cout;
  using std::endl;
  Time planning;
  Time coding(2, 40);
  Time fixing(5, 55);
  Time total;

  cout << "Czas planowania = ";
  planning.show();
  cout << endl;

  cout << "Czas kodowania = ";
  coding.show();
  cout << endl;

  cout << "Czas poprawiania = ";
  fixing.show();
  cout << endl;

  total = coding + fixing;
  cout << "Lacznie (coding + fixing) = ";
  total.show();
  cout << endl;

  Time morefixing(3, 28);
  cout << "Kolejne poprawki = ";
  morefixing.show();
  cout << endl;
  total = morefixing.operator+(total);
  cout << "Lacznie (morefixing.operator+(total)) = ";
  total.show();
  cout << endl;


  return 0;
}

