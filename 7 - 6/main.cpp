#include <iostream>
using namespace std;
const int ArSize = 5;

int fill_array(double table[], const int size);
void read_array(double table[], const int size);
void reverse_array(double table[], const int size);

int main()
{
  double array[ArSize];
  int actual_size;
  actual_size = fill_array(array, ArSize);
  read_array(array, actual_size);
  reverse_array(array, actual_size);
  read_array(array, actual_size);
  return 0;
}

int fill_array(double table[], const int size)
{
  int i;
  for(i = 0; i < size; i++)
  {
    double value;
    cout << "Podaj wartosc dla " << i + 1 << " komorki tablicy: ";
    if( !(cin >> value) )
    {
      cin.clear();
      while( cin.get() != '\n')
      {
        continue;
      }
      break;
    }
    table[i] = value;
  }
  return i;
}

void read_array(double table[], const int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << "Wartosc dla " << i + 1 << " komorki tablicy: ";
    cout << table[i];
    cout << endl;
  }
}

void reverse_array(double table[], int size)
{
  cout << "Odwracanie tablicy.\n";
  size--;
  for(int i = 0; i <= size / 2 ; i++)
  {
    double temp = table[size-i];
    table[size-i] = table[i];
    table[i] = temp;
  }
}
