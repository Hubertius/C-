#include <iostream>
const int Max = 5;

using namespace std;

int fill_array(double arr[], int limit); // double arr[] == double * arr
void show_array(const double arr[], int n); // nie zmienia danych, bo const
void revalue(double r, double ar[], int n);

int main()
{
  double properties[Max];
  int size = fill_array(properties, Max);
  show_array(properties, size);
  if( size > 0)
  {
    cout << "Podaj czynnik zmiany wartosci: ";
    double factor;
    while( !(cin >> factor) ) // nieliczbowa wartosc na wejściu
    {
      cin.clear(); // pozbywanie sie flagi
      while(cin.get() != '\n')
      {
        continue;
      }
      cout << "Niepoprawna wartosc! Podaj ponownie liczbe: ";
    }
    revalue(factor, properties, size);
    show_array(properties, size);
  }
  cout << "Gotowe.\n";
  return 0;
}

int fill_array(double arr[], int limit) //double arr[] == double * arr
{
  double temp;
  int i;
  for(i = 0; i < limit; i++)
  {
    cout << "Podaj wartosc nr " << i + 1 << ": ";
    cin >> temp;
    if( !cin ) // bledne dane
    {
      cin.clear(); // pozbywanie sie flagi z cin
      while(cin.get() != '\n') // czyszczenie bufora
      {
        continue;
      }
      break;
    }
    else if( temp < 0 )
    {
      break;
    }
    arr[i] = temp;
  }
  return i;
}

void show_array(const double arr[], int n) // const double arr[] == const double * arr
{
  for(int i = 0; i < n; i++)
  {
    cout << "Nieruchomosc nr " << i + 1 << ": ";
    cout << arr[i] << endl;
  }
}

void revalue(double r, double arr[], int n) // double arr[] == double * arr
{
  for(int i = 0; i < n; i++)
  {
    arr[i] *= r;
  }
}
