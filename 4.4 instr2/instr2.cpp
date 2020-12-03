#include <iostream>
using namespace std;

int main()
{
  const int Arsize = 20;
  char name[Arsize];
  char dessert[Arsize];
  cout << "Podaj swoje imie: ";
  cin.getline(name, Arsize); // funkcja może wczytać nie więcej niż 19 znaków, ponieważ 20 będzie zajęty przez znak '\0'.
  cout << "Podaj swoj ulubiony deser: ";
  cin.getline(dessert, Arsize); // funkcja może wczytać nie więcej niż 19 znaków, ponieważ 20 będzie zajęty przez znak '\0'.
  cout << "Mam dla ciebie " << dessert << ", " << name;

  return 0;
}
