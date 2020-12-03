#include <iostream>
using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guest =
    {
        "Glorious Gloria", // wartość pola name
        1.88, // wartość pola volume
        29.99 // wartość pola price
    }; // guest to zmienna strukturalna typu inflatable
    inflatable pal =
    {
      "Audacious Arthur",
      3.12,
      32.99
    }; // pal to druga zmienna strukturalna typu inflatable

    cout << "Wpisz na swoja liste gosci jeszcze: " << guest.name << " oraz " << pal.name << "." << endl;
    cout << "Mozesz miec ich oboje za ";
    cout << guest.price + pal.price << " zl." << endl;

    return 0;
}

/* DZIAŁANIE PROGRAMU

Wpisz na swoja liste gosci jeszcze: Glorious Gloria oraz Audacious Arthur.
Mozesz miec ich oboje za 62.98 zl.

*/
