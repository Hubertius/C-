#include <iostream>
using namespace std;

struct Batonik
{
  char * brand;
  double how_many;
  int calories;

};

void fill_the_structure(Batonik &structure,const char * chain = "Millenium Munch", double value = 2.85, double c = 350);

int main()
{
  Batonik munky;
  fill_the_structure(munky, "Milka munch");
  cout << "Brand: " << munky.brand << endl;
  cout << "How many it costs: " << munky.how_many << endl;
  cout << "Calories: " << munky.calories;

  return 0;
}

void fill_the_structure(Batonik &structure,const char * chain, double value, double c)
{
  char * temp = (char *) chain;
  structure.brand = temp;
  structure.how_many = value;
  structure.calories = c;
}
