#include <iostream>
#include "stone.h"

using std::cout;
Stone::Stone(double lbs)
{
  stone = int (lbs) / Lbs_per_stn; // dzielenie całkowite
  pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
  pounds = lbs;
}

// konstruje obiekt Stone z liczby kamieni i funtów
Stone::Stone(int stn, double lbs)
{
  stone = stn;
  pds_left = lbs;
  pounds = stn * Lbs_per_stn + lbs;
}

Stone::Stone() // konstruktor domyślny, zeruje obiekt
{
  stone = pounds = pds_left = 0;
}

Stone::~Stone() // destruktor
{

}

//pokazuje masę w kamieniach
void Stone::show_stn() const
{
  cout << stone << "kamieni, " << pds_left << "funtow\n";
}

// pokazuje masę w funtach
void Stone::show_lbs() const
{
  cout << pounds << " funtow\n";
}
