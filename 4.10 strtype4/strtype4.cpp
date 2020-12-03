#include <iostream>
#include <string> // udostępnianie klasy string
#include <cstring> // biblioteka łańcuchów w stylu C
using namespace std;

int main()
{
    char charr[20];
    string str;

    cout << "Dlugosc lancucha w zmiennej charr przed wprowadzeniem danych: ";
    cout << strlen(charr) << endl;
    cout << "Dlugosc lancucha w zmiennej str1 przed wprowadzeniem danych: ";
    cout << str.size() << endl; // size() jest metodą klasy string
    cout << "Wprowadzenie wiersza tekstu dla charr: ";
    cin.getline(charr, 20);
    cout << "Wprowadzono: " << charr << endl;
    cout << "Podaj kolejny wiersz tekstu dla str: ";
    getline(cin, str); // ta wersja getline() NIE JEST metodą klasy string
    cout << "Wprowadzono str = " << str << endl;
    cout << "Dlugosc lancucha w zmiennej char po wprowadzeniu danych: " << strlen(charr) << endl;
    cout << "Dlugosc lancucha w zmiennej str po wprowadzeniu danych: "<< str.size() << endl;

    return 0;
}
