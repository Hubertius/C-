#include <iostream>
using namespace std;

int main()
{
  const int Arsize = 20;
  char name[Arsize];
  char dessert[Arsize];

  cout << "Podaj swoje imie: ";
  cin >> name;
  cout << "Podaj swoj ulubiony deser: ";
  cin >> dessert;
  cout << "Mam dla ciebie deser " << dessert << " " << name << endl;
  return 0;
}
