#include <iostream>
#include <string> // udostępnienie klasy string
#include <cstring> // biblioteka obsługi łańcuchów w C
using namespace std;

int main()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "pantera";

    // przypisanie obiektów string i tablic znakowych.
    str1 = str2;
    strcpy(charr1, charr2);

    // "doklejanie" łańcuchów
    str1 += " makaron";
    strcat(charr1, " sok");

    // określenie długości łańcucha.
    int len_str1 = str1.size(); // Określ długość str1.
    int len_charr1 = strlen(charr1); // Określ długość łańcucha tablicy znakowej charr1.

    cout << "Lancuch \"str\" " << str1 << " ma " << len_str1 << " znakow." << endl;
    cout << "Lancuch \"charr1\" " << charr1 << " ma " << len_charr1 << " znakow." << endl;
    return 0;
}

/* DZIAŁANIE PROGRAMU

Lancuch "str" pantera makaron ma 15 znakow.
Lancuch "charr1" jaguar sok ma 10 znakow.

*/
