#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
  char * str; // for strlen(), strcpy()
  int ct; // it directs chain
};
void set(stringy &structure, char * chain);
void show(stringy &structure, int how_many = 1);
void show(char array[], int how_many = 1);


int main()
{
  stringy beany;
  char testing[] = "Rzeczywistosc to juz nie to, co kiedys";
  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Gotowe!");
  char * ps = beany.str;
  delete [] ps;
  return 0;
}

void set(stringy &structure, char * chain)
{
  int i;
  for(i = 0; chain[i] != '\0'; i++)
    continue;
  structure.ct = i;
  structure.str = new char[structure.ct];
  for(i = 0; chain[i] != '\0'; i++)
  {
    structure.str[i] = chain[i];
  }

}

void show(stringy &structure, int how_many)
{
  for(int i = 0; i < how_many; i++)
  {
    cout << structure.str << endl;
  }
}
void show(char array[], int how_many)
{
  for(int i = 0; i < how_many; i++)
  {
    cout << array << endl;
  }
}
