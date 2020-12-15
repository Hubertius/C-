#include <iostream>
#include <cstring> // prototyp funkcji strcmp()
using namespace std;

int main()
{
    char word[5] = "?ate";

    for(char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "Petla sie skonczyla, slowo to: " << word << endl;
    
    return 0;

}
