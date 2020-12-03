#include <iostream>
using namespace std;

int main()
{
    int updates = 6; // deklaracja zmiennej
    int * p_updates = &updates; // deklaracja wskaznika na int i przypisanie wskaznikowi adresu updates

    // pokazanie wartosci na dwa sposoby
    cout << "Wartosci: updates = " << updates << endl;
    cout << "Wartosci: *p_updates = " << *p_updates << endl;

    // pokazanie adresu na dwa sposoby

    cout << "Adres: &updates = " << &updates << endl;
    cout << "Adres: p_updates = " << p_updates << endl;

    return 0;
}

/* DZIAŁANIE PROGRAMU

Wartosci: updates = 6
Wartosci: *p_updates = 6
Adres: &updates = 0x6dfee8
Adres: p_updates = 0x6dfee8

*/
