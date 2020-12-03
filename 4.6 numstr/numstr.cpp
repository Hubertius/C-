#include <iostream>
using namespace std;

int main()
{
    cout << "W ktorym roku zbudowano twoj dom?" << endl;
    int year;
    cin >> year; // UWAGA! W kolejce wejsciowej po pobraniu wartosci dla zmiennej int POZOSTANIE znak nowego wiersza.
                 // Trzeba sie go koniecznie pozbyć!
    cin.get();   // Pozbycie się problemu sposób 1
    //(cin >> year).get(); Pozbycie się problemu sposób 2 (i jednocześnie skrócenie kodu).
    cout << "Przy jakiej ulicy mieszkasz?" << endl;
    char adress[80];
    cin.getline(adress, 80);
    cout << "Rok budowy: " << year << endl;
    cout << "Adres: " << adress << endl;
    cout << "GOTOWE" << endl;
    return 0;
}
/* DZIAŁANIE PROGRAMU
W ktorym roku zbudowano twoj dom?
1966
Przy jakiej ulicy mieszkasz?
Ulica Komputerowa 44 m.8
Rok budowy: 1966
Adres: Ulica Komputerowa 44 m.8
GOTOWE
*/
