#include <iostream>
using namespace std;

int main()
{
    double * p3 = new double [3]; // miejsce na 3 wartosci double, p3 traktujemy jako nazwe tablicy
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p[1] to " << p3[1] << endl;
    p3 = p3 + 1;                  // przesuniecie wskaznika o jeden (albo alternatywnie ujmujac nastapilo jego zwiekszenie)
    cout << "Teraz p3[0] to " << p3[0] << endl;
    cout << ", a p3[1] to " << p3[1] << endl;
    p3 = p3 - 1;                    // znow wskazujemy poczatek tablicy
    delete [] p3;                   // zwalniamy pamiec
    return 0;
}

/* Działanie programu

p[1] to 0.5
Teraz p3[0] to 0.5
, a p3[1] to 0.8

*/
