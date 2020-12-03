#include <iostream>
using namespace std;

int main()
{
    int higgens = 5;
    int * pt = &higgens;
    cout << "Wartosc zmiennej higgens = " << higgens << endl;
    cout << "Adres zmiennej higgens = " << &higgens << endl;
    cout << "Wartosc *pt = " << *pt << endl;
    cout << "Wartosc pt = " << pt << endl;
    return 0;
}

/* DZIAŁANIE PROGRAMU

Wartosc zmiennej higgens = 5
Adres zmiennej higgens = 0x6dfee8
Wartosc *pt = 5
Wartosc pt = 0x6dfee8

*/
