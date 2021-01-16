#include <iostream>
#include "sales.h"


Sales::Sales(const double ar[], int n)
{
  if( n > 4)
  {
    n = 4;
  }
  int i;
  double * pointer = (double *)ar;
  m_structure.m_min = *(pointer + 0);
  m_structure.m_max = *(pointer + 0);
  for(i = 0; i < n; i++)
  {
    m_structure.m_average += *(pointer + i);
    if( i > 0 )
    {
      if( m_structure.m_min > *(pointer + i) )
      {
        m_structure.m_min =  *(pointer + i);
      }
      if( m_structure.m_max < *(pointer + i) )
      {
        m_structure.m_max = *(pointer + i);
      }
    }
    m_structure.m_sales[i] = *(pointer + i);
  }
}
Sales::Sales()
{
  for(int i = 0; i < 4; i++)
  {
    m_structure.m_sales[i] = 0.0;
  }
  m_structure.m_average = 0.0;
  m_structure.m_min = 0.0;
  m_structure.m_max = 0.0;
}
void Sales::showSales()
{
  std::cout << "Data from the structure about the sales." << std::endl;
  std::cout << "Quartely sales: ";
  for(int i = 0; i < 4; i++)
  {
    std::cout << m_structure.m_sales[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Average: " << m_structure.m_average << std::endl;
  std::cout << "Max: " << m_structure.m_max << std::endl;
  std::cout << "Min: " << m_structure.m_min << std::endl;
}
