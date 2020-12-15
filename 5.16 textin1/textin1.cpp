#include <iostream>
using namespace std;

int main()
{
    char ch;
    int count = 0;
    cout << "Podawaj znaki: # konczy wprowadzanie." << endl;
    cin >> ch; // UWAGA, cin pomija spacje, tabulatory i znaki nowego wiersza!
    while(ch != '#')
    {
        cout << ch; // Spacje nie sa pokazywane na ekranie, nie sa tez zliczane!
        ++count;
        cin >> ch;
    }
    cout << endl << "Wczytano " << count << " znakow." << endl;

    return 0;
}

/* DZIAŁANIE PROGRAMU

Podawaj znaki: # konczy wprowadzanie.
Zobacz jak biega Jerzy#niezle
ZobaczjakbiegaJerzy
Wczytano 19 znakow.

 */
