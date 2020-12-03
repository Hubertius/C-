#include <iostream>
using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guests[2] =
    {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };
    cout << "Goscie tacy jak " << guests[0].name << " i " << guests[1].name << " razem maja " << guests[0].volume + guests[1].volume;
    cout << " stop szesciennych." << endl;

    return 0;
}

/* DZIAŁANIE PROGRAMU

Goscie tacy jak Bambi i Godzilla razem maja 2000.5 stop szesciennych.

*/
