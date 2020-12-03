#include <iostream>
using namespace std;

int main()
{
    int donuts = 6;
    double cups = 4.5;

    cout << "Wartosc zmiennej donuts = " << donuts << endl;
    cout << ", a adres zmienej donuts = " << &donuts << endl;

    cout << "Wartosc zmiennej cups = " << cups << endl;
    cout << ", a adres zmiennej cups = " << &cups << endl;
    return 0;
}

/* DZIAŁANIE PROGRAMU

Wartosc zmiennej donuts = 6
, a adres zmienej donuts = 0x6dfeec
Wartosc zmiennej cups = 4.5
, a adres zmiennej cups = 0x6dfee0

*/
