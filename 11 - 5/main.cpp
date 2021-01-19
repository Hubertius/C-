#include <iostream>
#include "stone.h"

int main()
{
  using std::cin;
  using std::cout;
  using std::endl;
  cout << "Podaj co wybierasz (1 - kamienie i funty), 2 - funty z reszta, 3 - funty bez reszty: ";
  int choice;
  while( !(cin >> choice) || (choice < 1 && choice > 3) )
  {
    cin.clear();
    while( cin.get() != '\n')
      continue;
    cout << "Podaj co wybierasz (1 - kamienie i funty), 2 - funty z reszta, 3 - funty bez reszty: ";
  }
  Stone first;
  if( choice == 1 )
  {
    first.choose_of_operation(1);
    first = Stone(10, 25.2);
    cout << first;
  }
  else if( choice == 2 )
  {
    first = Stone(10, 25.1);
    first.choose_of_operation(2);
    cout << first;
  }
  else
  {
    first = Stone(17);
    first.choose_of_operation(3);
    cout << first;
  }

  return 0;
}
