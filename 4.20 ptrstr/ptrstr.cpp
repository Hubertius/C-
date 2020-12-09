#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char animal[20] = "niedzwiedz";
    const char * bird = "myszolow";
    char * ps;

    cout << animal << " oraz ";
    cout << bird << endl;

    cout << "Podaj rodzaj zwierzecia: ";
    cin >> animal;  //ok, o ile < 20 znakow;
    // cin.getline(animal, 20);

    ps = animal;
    cout << ps << endl;
    cout << "Przed uzyciem strcpy():" << endl;
    cout << animal << " pod adresem " << (int *) animal << endl;
    cout << ps << " pod adresem " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "Po uzyciu strcpy():" << endl;
    cout << animal << " pod adresem " << (int *) animal << endl;
    cout << ps << " pod adresem " << (int *) ps << endl;
    delete [] ps;

    return 0;
}

/* DZIAŁANIE PROGRAMU

niedzwiedz oraz myszolow
Podaj rodzaj zwierzecia: wilk
wilk
Przed uzyciem strcpy():
wilk pod adresem 0x6dfed4
wilk pod adresem 0x6dfed4
Po uzyciu strcpy():
wilk pod adresem 0x6dfed4
wilk pod adresem 0xd1a3a0

*/
