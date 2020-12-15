#include <iostream>
#include <string> // klasa string
using namespace std;

int main()
{
    string word = "?ate";

    for(char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "Petla sie skonczyla, slowo to: " << word << endl;
    return 0;
}

/* DZIAŁANIE PROGRAMU

?ate
aate
bate
cate
date
eate
fate
gate
hate
iate
jate
kate
late
Petla sie skonczyla, slowo to: mate

*/
