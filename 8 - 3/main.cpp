#include <iostream>
#include <ctype.h>

using namespace std;

void upper_chain()
{
  char check;
  cout << "Write if you want to end program here (q to end): ";
  cin >> check;
  while( check != 'q' )
  {
    while( cin.get() != '\n');
    cout << "Write a chain: ";
    char temp[1000];
    cin.get(temp, 1000);
    for(int i = 0; temp[i] != '\0'; i++)
    {
      cout << (char)toupper(temp[i]);
    }
    cout << endl;
    cout << "Write if you want to end program here (q to end): ";
    cin >> check;
  }
}

int main()
{
  upper_chain();
  return 0;
}
