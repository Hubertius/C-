#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main()
{
  ofstream fout;
  const char * fn = "data.txt";
  fout.open(fn);
  if( !fout.is_open() )
  {
    cout << "I can't open it!";
    exit(EXIT_FAILURE); // return 1
  }
  double objective;
  cout << "Write focal length of telescope in milimitres: ";
  cin >> objective;
  double array[LIMIT];
  cout << "Write focals in milimitres of " << LIMIT << " glasses.\n";
  for(int i = 0; i < LIMIT; i++)
  {
    cout << "Glass nr " << i + 1 << ": ";
    cin >> array[i];
  }
  file_it(fout, objective, array, LIMIT );
  file_it(cout, objective, array, LIMIT);
  return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n)
{
  ios_base::fmtflags initial;
  initial = os.setf(ios_base::fixed);
  os.precision(0);
  os << "Ogniskowa obiektywu: " << fo << " mm\n.";
  os.setf(ios::showpoint);
  os.precision(1);
  os.width(12);
  os << "f okularu";
  os.width(15);
  os << "powiekszenie" << endl;
  for(int i = 0; i < n; i++)
  {
    os.width(12);
    os << fe[i];
    os.width(15);
    os << int (fo/fe[i] + 0.5) << endl;
  }
  os.setf(initial);
}
