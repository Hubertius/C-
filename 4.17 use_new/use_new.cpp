#include <iostream>
using namespace std;

int main()
{
    int nights = 1001;
    int * pt = new int;
    *pt = nights;

    cout << "Wartosc nights = " << nights << endl;
    cout << "Adres nights = " << &nights << endl;
    cout <<"Wartosc *pt = " << *pt << endl;
    cout << "Wartosc pt = " << pt << endl;

    double * pd = new double;
    *pd = 10000001.0;

    cout << "Wartosc *pd = " << *pd << endl;
    cout << "Wartosc pd = " << pd << endl;
    cout << "Polozenie wskaznika &pd = " << &pd << endl;
    cout << "Wielkosc pt = " << sizeof(pt) << endl;
    cout << "Wielkosc *pt = " << sizeof(*pt) << endl;
    cout << "Wielkosc pd = " << sizeof(pd) << endl;
    cout << "Wielkosc *pd = " << sizeof(*pd) << endl;
    /*
    Adresy pt i pd to po prostu liczby, bez informacji o typie ani rozmiarze.
    */
    return 0;
}

/* DZIAŁANIE PROGRAMU

Wartosc nights = 1001
Adres nights = 0x6dfee8
Wartosc *pt = 1001
Wartosc pt = 0xdda2a8
Wartosc *pd = 1e+007
Wartosc pd = 0xdda398
Polozenie wskaznika &pd = 0x6dfee4
Wielkosc pt = 4
Wielkosc *pt = 4
Wielkosc pd = 4
Wielkosc *pd = 8

*/
