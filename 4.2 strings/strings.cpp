#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++owboy";
  cout << "Jak sie masz? Jestem " << name2 << "!" << endl;
  cout << "A ty jak sie nazywasz?" << endl;
  cin >> name1;
  cout << "No tak, " << name1 << ", twoje imie ma ";
  cout << strlen(name1) << " liter i jest zapisane w tablicy majacej ";
  cout << sizeof(name1) << " bajtow." << endl;
  cout << "Twoj inicjial to: " << name1[0] <<  "." << endl;
  name1[3] = '\0';
  cout << "Trzy pierwsze litery twojego imienia to: " << name1 << endl;
  return 0;
}
