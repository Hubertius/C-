#include <iostream>
using namespace std;

int main()
{
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3,2,1};

    //Oto dwa sposoby okreslania adresu tablicy
    double * pw = wages; // nazwa tablicy = adres;
    short * ps = &stacks[0]; // mozna tez uzyc adresu

    //element tablicy
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "Dodaj do wskaznika pw 1."<<endl;
    cout << "pw = " << pw << ", *pw = " << *pw << endl;

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "Dodaj do wskaznika ps 1." << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "Dostep do dwoch elementow, zapis tablicowy." << endl;
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "Dostep do dwoch elementow, zapis wskaznikowy." << endl;
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << "." << endl;

    cout << sizeof(wages) << " = wielkosc tablicy wages." << endl;
    cout << sizeof(pw) << " = wielkosc wskaznika pw." << endl;
    return 0;
}

/* DZIAŁANIE PROGRAMU

pw = 0x6dfec0, *pw = 10000
Dodaj do wskaznika pw 1.
pw = 0x6dfec8, *pw = 20000
ps = 0x6dfeba, *ps = 3
Dodaj do wskaznika ps 1.
ps = 0x6dfebc, *ps = 2
Dostep do dwoch elementow, zapis tablicowy.
stacks[0] = 3, stacks[1] = 2
Dostep do dwoch elementow, zapis wskaznikowy.
*stacks = 3, *(stacks + 1) = 2.
24 = wielkosc tablicy wages.
4 = wielkosc wskaznika pw.

*/
