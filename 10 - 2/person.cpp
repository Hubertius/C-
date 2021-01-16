#include <iostream>
#include "person.h"

Person::Person(const std::string &ln, const char * fn)
{
  lname = ln;
  int i;
  for(i = 0; i < LIMIT && fn[i] != '\0'; i++ )
  {
    fname[i] = fn[i];
  }
  fname[i] = '\0';
}
void Person::Show() const
{
  std::cout << "fname: " << fname << std::endl;
  std::cout << "lname: " << lname << std::endl;
}
void Person::FormalShow() const
{
  std::cout << "lname: " << lname << std::endl;
  std::cout << "fname: " << fname << std::endl;
}
