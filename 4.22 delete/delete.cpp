#include <iostream>
#include <cstring>
using namespace std;

char * getname(void); // prototyp funkcji

int main()
{
    char * name;  // utworzenie wskaźnika bez przypisanej pamięci

    name = getname(); // przypisanie zmiennej name adresu łańcucha
    cout << name << " pod adresem " << (int *) name << endl;
    delete [] name; // zwolnienie pamięci

    name = getname();  // ponowne użycie zwolnionej pamięci
    cout << name << " pod adresem " << (int *) name << endl;
    delete [] name;    // ponowne zwolnienie pamięci
    return 0;
}

char * getname(void) // zwraca wskaźnik na nowy łańcuch
{
    char temp[80]; // tymczasowy bufor
    cout << "Podaj nazwisko: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp); // kopiowanie łańcucha do krótszej tablicy

    return pn; // po zaczeniu funkcji temp zostanie utracone
}

/* DZIAŁANIE PROGRAMU

Podaj nazwisko: Brzęczyszczykiewicz
Brzeczyszczykiewicz pod adresem 0xd90578
Podaj nazwisko: Nowal
Nowal pod adresem 0xd9a2d0

*/
