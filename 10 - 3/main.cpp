#include <iostream>
#include "golf.h"

int main()
{
  Golfclub first("Andrew Peterson", 220);
  first.showgolf();
  first.handicap(125);
  first.showgolf();
  first = Golfclub();
  first.showgolf();
  first.handicap(175);
  first.showgolf();
}
