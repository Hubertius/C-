#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Podaj czas opoznienia w sekundach: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC; // konwersja na jednostki zegara
    cout << "Zaczynamy\a." << endl;
    clock_t start = clock();
    while(clock() - start < delay);
    cout << "GOTOWE" << endl;
    return 0;
}

/* DZIAŁANIE PROGRAMU

Podaj czas opoznienia w sekundach: 5
Zaczynamy.
GOTOWE

*/
