#include <iostream>
using namespace std;

int main()
{
  int yams[3];
  yams[0] = 7;
  yams[1] = 8;
  yams[2] = 6;
  int yamcosts[3] = {20, 30, 5};
  cout << "Razem ingamow: ";
  cout << yams[0] + yams[1] + yams[2] << endl;
  cout << "Paczka zawierajaca " << yams[1] << " ingamow kosztuje po ";
  cout << yamcosts[1] << " zlotych" << endl;
  int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
  cout << "Laczny koszt ingamu to: " << total << " zlotych." << endl;
  cout << "Rozmiar tablicy yams = " << sizeof(yams) << " w bajtach." << endl;
  cout << "Rozmiar jednego elementu tablicy yams = " << sizeof(yams[0]) << " w bajtach." << endl;
  return 0;
}
