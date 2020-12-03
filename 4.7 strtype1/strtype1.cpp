#include <iostream>
using namespace std;

int main()
{
    char charr1[20]; // pusta tablica;
    char charr2[20] = "jaguar"; // tablica zainicjalizowana;
    string str1; // utwotzenie pustego OBIEKTU string
    string str2 = "pantera"; // utworzenie zainicjalizowanego obiektu string.

    cout << "Podaj gatunek kota: ";
    cin >> charr1; // wczytanie tylko jednego wyrazu, więc nie trzeba się obawiać o wystąpienie w środku nazwy białego znaku.
    // Mimo to warto dla nawyku stosować lepsze alternatywne zapisy:
    // a) cin.get(charr1, 20).get();
    // b) cin.getline(charr1, 20);
    cout << "Podaj inny gatunek kota: ";
    cin >> str1;
    cout << "Oto wybrane kotowate: ";
    cout << charr1 <<", " << charr2 << ", " << str1 << ", " << str2 <<'.' << endl;
    cout << "Trzecia litera w slowie " << charr2 << " to " << charr2[2] << "." << endl;
    cout << "Trzecia litera w slowie " << str2 << " to " << str2[2] << "." << endl;
    return 0;
}
/* DZIAŁANIE PROGRAMU

Podaj gatunek kota: ocelot
Podaj inny gatunek kota: tygrys
Oto wybrane kotowate: ocelot, jaguar, tygrys, pantera.
Trzecia litera w slowie jaguar to g.
Trzecia litera w slowie pantera to n.

*/
