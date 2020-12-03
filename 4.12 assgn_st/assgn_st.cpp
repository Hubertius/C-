#include <iostream>
using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
  inflatable bouquet =
  {
      "sloneczniki",
      0.20,
      12.49
  };
  inflatable choice;
  cout << "Zmienna bouquet: " << bouquet.name << " za ";
  cout << bouquet.price << " zl." << endl;
  choice = bouquet;
  cout << "Zmienna choice: " << choice.name << " za ";
  cout << choice.price << " zl." << endl;

  return 0;
}


/* DZIAŁANIE PROGRAMU

Zmienna bouquet: sloneczniki za 12.49 zl.
Zmienna choice: sloneczniki za 12.49 zl.

*/
