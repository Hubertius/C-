#include <iostream>
using namespace std;


int main()
{
  int rats = 101;
  int & rodents = rats; // rodents to referencja

  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;
  rodents++;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;

  cout << "Adress of rats = " << &rats;
  cout << ", adress of rodendts = " << &rodents << endl;

  return 0;
}
