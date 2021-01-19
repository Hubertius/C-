#include <iostream>
#include "time.h"

int main()
{
  using std::cout;
  using std::endl;

  Time clock(5, 23);
  Time another_clock(11, 54);
  int minutes = 71;
  Time temp;
  cout << "Temp: " << temp;
  temp = clock + another_clock;
  cout << "Temp dodawanie z obiektem clock: " << temp;
  temp = clock + minutes;
  cout << "Temp dodawanie z wartoscia typu double: " << temp;
  temp = minutes + clock;
  cout << "Value dodawanie z obiektem klasy Time: " << temp;
  temp = another_clock - clock;
  cout << "Temp odejmowanie z obiektem clock: " << temp;
  return 0;
}
