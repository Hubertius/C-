#include <iostream>
using namespace std;

void read(char * chain, int n = 0);

int main()
{
  char word[80];
  cout << "Write a chain: ";
  cin.get(word, 80);
  read(word, 2);
  return 0;
}

void read(char * chain, int n )
{
  if( chain == NULL )
  {
    return;
  }
  cout << "0: " << chain << endl;
  for(int i = 0; i < n; i++)
  {
    cout << i + 1 << ": " << chain << endl;
  }
}
