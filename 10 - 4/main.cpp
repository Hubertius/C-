#include <iostream>
#include "sales.h"


int main()
{
  double data[4] = {2374.5, 2892.4, 3248.6, 4237.5};
  Sales first;
  first.showSales();
  first = Sales(data, 4);
  first.showSales();



  return 0;
}
