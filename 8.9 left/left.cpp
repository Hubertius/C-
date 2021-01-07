#include <iostream>
#include <cstring>
using namespace std;
const int Arsize = 80;
char * left(const char * str, int n = 1);

int main()
{
  char sample[Arsize];
  cout << "Podaj lancuch znakowy: " << endl;
  cin.get(sample, Arsize);
  cout << "Podaj ile znakow chcesz skopiowac z lancucha: ";
  int n;
  cin >> n;
  char * ps = left(sample, n);
  cout << ps << endl;
  delete [] ps;
  ps = left(sample);
  cout << ps << endl;
  delete [] ps;
  return 0;
}

// funkcja zwraca wskaźnik na nowy łańcuch składający się z pierwszych n znaków łańcucha str
char * left(const char * str, int n)
{
  if(n < 0)
  {
    n = 0;
  }
  int len = strlen(str);
  n = (n < len) ? n : len; // zapewniamy, że 'new' nie zalokuje więcej miejsca, niż jest to potrzebne
  char * p = new char[n+1];
  int i;
  for(i = 0; i < n && str[i] != '\0'; i++)
  {
    p[i] = str[i]; // kopiowanie łańcucha
  }
  while(i <= n)
  {
    p[i++] = '\0'; // wyzerowanie reszty łaćucha
  }
  return p;

}
