#include <iostream>
#include "stone.h"

void display(const Stone & st, int n);

int main()
{
  Stone incognito = 275; // inicjalizacja konstruktorem
  Stone wolfe(285.7); // równoważne instrukcji: Stone wolfe = 285.7;
  Stone taft(21, 8);

  std::cout << "Celebryta wazyl ";
  incognito.show_stn();
  std::cout << "Detektyw wazyl ";
  wolfe.show_stn();
  std::cout << "Prezydent wazyl ";
  taft.show_lbs();
  incognito = 276.8; // konwersja konstruktorem
  taft = 325;  // równoważne instrukcji taft = Stone(325);
  std::cout << "Po obiedzie celebryta wazy ";
  incognito.show_stn();
  std::cout << "Po obiedzie prezydent wazy ";
  taft.show_stn();
  return 0;
}

void display(const Stone & st, int n)
{
  for(int i = 0; i < n; i++)
  {
    std::cout << "Oho!";
    st.show_stn();
  }
}
