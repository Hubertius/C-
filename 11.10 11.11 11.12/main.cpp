#include "mytime3.h"

int main()
{
  using std::cout;
  using std::endl;
  Time aida(3, 35);
  Time tosca(2, 48);
  Time temp;

  cout << "Aida i Tosca: " << endl;
  cout << aida <<"; " << tosca << endl;
  cout << "Aida i Tosca: " << temp << endl;
  temp = aida * 1.7;
  cout << "Aida * 1.17: " << temp << endl;
  cout << "10 * Tosca: " << 10.0 * tosca << endl;
  
  return 0;
}
