#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
  cout << "Write a value: ";
  int value;
  if( !(cin >> value) )
  {
    cout << "ERROR!";
    return 1;
  }
  if(value < 0)
  {
    cout << "Wrong value!";
    return 2;
  }
  int score = factorial(value);
  cout << "Wynik silni: " << score << endl;

  return 0;
}

int factorial(int n)
{
  if(n < 2)
  {
    return 1;
  }
  return n * factorial(n - 1);

}
