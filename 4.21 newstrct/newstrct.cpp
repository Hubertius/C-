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
    inflatable * ps = new inflatable; // alokacja pamieci na strukturę
    cout << "Podaj nazwe dmuchanej zabawki: ";
    cin.get(ps->name, 20).get();
    cout << "Podaj objetosc w stopach szesciennych: ";
    cin >> (*ps).volume;
    cout << "Podaj cene w zl: ";
    cin >> ps->price;
    cout << "Nazwa: " << (*ps).name << endl;
    cout << "Objetosc: " << ps->volume << " stop szesciennych." << endl;
    cout << "Cena: " << ps->price << " zl." << endl;
    delete ps;

    return 0;
}

/* DZIAŁANIE PROGRAMU

Podaj nazwe dmuchanej zabawki: Bajeczny Frodo
Podaj objetosc w stopach szesciennych: 1.4
Podaj cene w zl: 27.99
Nazwa: Bajeczny Frodo
Objetosc: 1.4 stop szesciennych.
Cena: 27.99 zl.

*/
