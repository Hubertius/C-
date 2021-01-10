#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
T max5(T array[]);

int main()
{
  int array_int[5] = {1,2,3,4,5};
  double array_double[5] = {0.5, 1.5, 2.5, 3.5, 4.5};
  int  temp_int = max5(array_int);
  double  temp_double = max5(array_double);
  cout << "Maximum for int array: " << temp_int << endl;
  cout << "Maximum for double array: " << temp_double << endl;

  return 0;
}

template <typename T>
T max5(T array[])
{
  T temp =  *max_element(array , array + 5);
  return temp;
}
