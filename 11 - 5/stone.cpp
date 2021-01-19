#include <iostream>
#include "stone.h"


Stone::Stone(int stn, double lbs)
{
  stone = stn;
  pds_left = lbs;
  pounds = stn * Lbs_per_stn + lbs;
}


Stone::Stone(double lbs)
{
  stone = int (lbs) / Lbs_per_stn;
  pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
  pounds = lbs;
}

Stone::Stone(int lbs)
{
  stone = lbs / Lbs_per_stn;
  pds_left =  lbs % Lbs_per_stn;
  pounds = lbs;
}

Stone::Stone()
{
  stone = pounds = pds_left = 0;
}


Stone::~Stone()
{

}

Stone::Mode Stone::choose_of_operation(int form)
{
  if( form == 1 )
  {
    choice = STONES_AND_POUNDS;
  }
  else if( form == 2 )
  {
    choice = POUNDS_WITH_LEFT;
  }
  else
  {
    choice = POUNDS_WITHOUT_LEFT;
  }
}

std::ostream & operator<<(std::ostream & os, const Stone obj)
{
  if( obj.choice == 1 )
  {
    os << obj.stone << " kamieni, " << obj.pds_left << " funtow.\n";
  }
  else if( obj.choice == 2 )
  {
    os << obj.pounds << " funtow, a reszta funtowa to " << obj.pds_left << ".\n";
  }
  else if( obj.choice == 3 )
  {
    os << obj.pounds << " funtow.\n";
  }
  return os;
}
