#include <iostream>
const int Arsize = 20;

using namespace std;

int main()
{
    char name[Arsize];
    cout << "Prosze podac swoje imie: ";
    cin >> name;
    cout << "Oto twoje imie, ustawione pionowo, jako kody ASCII:" << endl;
    int i = 0;
    while(name[i] != '\0')
    {
        cout << name[i] << " : " << int(name[i]) << endl;
        i++;
    }
    return 0;
}
/* DZIAŁENIE PROGRAMU


Prosze podac swoje imie: Hubert
Oto twoje imie, ustawione pionowo, jako kody ASCII:
H : 72
u : 117
b : 98
e : 101
r : 114
t : 116

*/
