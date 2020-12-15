#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int ch;
    int count = 0;

    while( (ch = cin.get()) != EOF ) // sprawdzenie EOF
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << "Wczytano " << count << " znakow." << endl;

    return 0;
}

/* DZIAŁANIE PROGRAMU

Z mlodej piersi sie wyrwalo, w wielkim bolu i rozterce.
Z mlodej piersi sie wyrwalo, w wielkim bolu i rozterce.
I za wojskiem polecialo czyjes serce.
I za wojskiem polecialo czyjes serce.
^Z

Wczytano 94 znakow.

*/
