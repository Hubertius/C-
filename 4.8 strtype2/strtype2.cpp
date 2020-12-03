#include <iostream>
using namespace std;

int main()
{
    string s1 = "pingwin";
    string s2, s3;

    cout << "Jeden obiekt mozna przypisac innemu: s2 = s1." << endl;
    s2 = s1;
    cout << "s1  = " << s1 << " s2 = " << s2 << endl;
    cout << "Obiektowi string mozna przypisac lancuch w konwencji C." << endl;
    s2 = "myszolow";
    cout << "s2 = " << s2 << endl;
    cout << "Mozna laczyc dwa lancuchy string s3 = s1 + s2." << endl;
    s3 = s1 + s2;
    cout << "s3 = " << s3 << endl;
    cout << "Mozna dodawac lancuchy s1 += s2." << endl;
    s1 += s2;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << " przed dodaniem lancucha \"dzisiejszy\"." << endl;
    s2 += "dzisiejszy";
    cout << "s2 = " << s2;
    return 0;
}

/* DZIAŁANIE PROGRAMU

Jeden obiekt mozna przypisac innemu: s2 = s1.
s1  = pingwin s2 = pingwin
Obiektowi string mozna przypisac lancuch w konwencji C.
s2 = myszolow
Mozna laczyc dwa lancuchy string s3 = s1 + s2.
s3 = pingwinmyszolow
Mozna dodawac lancuchy s1 += s2.
s1 = pingwinmyszolow
s2 = myszolow przed dodaniem lancucha "dzisiejszy".
s2 = myszolowdzisiejszy

*/
