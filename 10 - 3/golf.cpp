#include <iostream>
#include "golf.h"


Golfclub::Golfclub(const char * name, int hc)
{

  int i;
  for(i = 0; i < 40 && name[i] != '\0'; i++)
  {
    m_struct.fullname[i] = name[i];
  }
  m_struct.fullname[i] = '\0';
  m_struct.handicap = hc;
}
Golfclub::Golfclub()
{
  const char * pointer = "Unknown";
  int i;
  for(i = 0; i < 40 && pointer[i] != '\0'; i++ )
  {
    m_struct.fullname[i] = pointer[i];
  }
  m_struct.fullname[i] = '\0';
  m_struct.handicap = 0;
}
void Golfclub::handicap(int hc)
{
  if( hc <= 0 )
  {
    std::cout << "Something is wrong with handicap! ERORR!" << std::endl;
    return;
  }
  else
  {
    std::cout << "Before change of the handicap: " << m_struct.handicap << std::endl;
    m_struct.handicap = hc;
    std::cout << "After change of the handicap: " << m_struct.handicap << std::endl;
  }

}
void Golfclub::showgolf()
{
  std::cout << "Fullname: " << m_struct.fullname << std::endl;
  std::cout << "Handicap: " << m_struct.handicap << std::endl;
}
