#include <iostream>
using namespace std;

void simple();

int main()
{
  cout << "main() wywola funkcje simple():\n";
  simple();
  cout << "main() po zakonczeniu funkcji simple().\n";
  return 0;
}

void simple()
{
  cout << "Jestem sobie taka prosciutka funkcja!\n";
}
