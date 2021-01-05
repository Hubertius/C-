#include <iostream>
const int Arsize = 5;
using namespace std;

double * fill_array(double array[], double * end);
void read_array(double array[], double * end);
void  reverse_array(double array[], double * end);

int main()
{
  double array[Arsize];
  double * pointer_end = fill_array(array, array + 5);
  read_array(array, pointer_end);
  reverse_array(array, pointer_end);
  read_array(array, pointer_end);
  return 0;
}

double * fill_array(double array[], double * end)
{
  double * pointer = array;
  for(pointer; pointer != end; pointer++)
  {
    cout << "Wczytaj wartosc: ";
    if( !(cin >> *pointer) )
    {
      cin.clear();
      while( cin.get() != '\n')
      {
        continue;
      }
      break;
    }
  }
  return pointer;
}

void read_array(double array[], double * end)
{
  cout << "Odczytywanie wartosci z tablicy.\n";
  double * pointer = array;
  for(pointer; pointer != end; pointer++)
  {
    cout << *pointer << ",\n";
  }
}

void  reverse_array(double array[], double * end)
{
  cout << "Odwracanie tablicy.\n";
  int how_many_elements = end - array;
  for(int i = 0; i < how_many_elements/2; i++)
  {
    double temp = array[i];
    array[i] = array[how_many_elements-i-1];
    array[how_many_elements-i-1] = temp;
  }
}
