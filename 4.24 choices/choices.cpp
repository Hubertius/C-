#include <iostream>
#include <vector> //STL C++98
#include <array> //C++11
using namespace std;

int main()
{
    double a1[4] = {1.2, 2.4, 3.6, 4.8};

    vector<double> a2(4);
    a2[0] =  1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;

    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;

    cout << "a1[2] = " << a1[2] << " pod adresem " << &a1[2] << "." << endl;
    cout << "a2[2] = " << a2[2] << " pod adresem " << &a2[2] << "." << endl;
    cout << "a3[2] = " << a3[2] << " pod adresem " << &a3[2] << "." << endl;
    cout << "a4[2] = " << a4[2] << " pod adresem " << &a4[2] << "." << endl;

    // nadużycie
    a1[-2] = 20.2;
    cout << "a1[-2] = " << a1[-2] << " pod adresem " << &a1[-2] << "." << endl;
    cout << "a3[2] = " << a3[2] << " pod adresem " << &a3[2] << "." << endl;
    cout << "a4[2] = " << a4[2] << " pod adresem " << &a4[2] << "." << endl;


    return 0;
}
