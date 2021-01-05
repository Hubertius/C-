#include <iostream>
using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main()
{
  double total, choices;
  cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz ";
  cout << "liczbe skreslen:\n";
  while( (cin >> total >> choices) && choices <= total )
  {
    cout << "szansa wygranej to jeden do: ";
    cout << probability(total, choices);
    cout << ".\n";
    cout << "Nastepne dwie liczby (jakikolwiek inny znak niz liczba)";
  }
  cout << "\nDO WIDZENIA\n";
  return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--)
    {
      result = result * n / p;
    }
    return result;
}


