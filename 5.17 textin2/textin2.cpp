#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0;

    cout << "Podawaj znaki: znak # konczy." << endl;
    cin.get(ch);
    while(ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << "Wczytano " << count << " znakow." << endl;
    return 0;
}

/* DZIAŁANIE PROGRAMU

Podawaj znaki: znak # konczy.
Zobacz jak biega Jerzy#niezle
Zobacz jak biega Jerzy
Wczytano 22 znakow.

*/
