#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    cin.get(ch); // proba odczytania znaku
    while(cin.fail() == false) // sprawdzenie EOF
    {
        cout << ch;  // pokazanie znaku
        ++count;
        cin.get(ch);  // proba odczytania kolejnego znaku
    }
    cout << endl << "Wczytano " << count << "znakow" << endl;
    return 0;
}

/* DZIAŁANIE PROGRAMU

Stoi na stacji lokomtywa,
Stoi na stacji lokomtywa,
Ciezka, ogromna i pot z niej splywa - tlusta oliwa.
Ciezka, ogromna i pot z niej splywa - tlusta oliwa.
^Z

Wczytano 78znakow

*/
