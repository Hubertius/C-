#include <iostream>
#include "bank.h"

int main()
{
  std::string name = "Hubertius";
  std::string name_of_the_account = "0131231";
  Bank first_account(name, name_of_the_account ,10000.50);
  first_account.show_account();
  first_account.pour_money(5024.37);
  first_account.show_account();
  first_account.take_money(3752.47);
  first_account.show_account();

  return 0;
}
