#include "cd.h"
using namespace std;

void Bravo(const Cd & disk);

int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("sonata fortepianowa b-dur, Fatazja C-moll", "Alfred Brendel", "Philips", 2, 57.17);

    Cd * pcd = &c1;

    std::cout << "Bezpośrednie użycie obiektu:\n";
    c1.report();
    c2.report();

    std::cout << "Użycie wskaźnika na typ Cd:\n";
    pcd->report();
    pcd = &c2;
    pcd->report();

    std::cout << "Wywołanie funkcji z argumentem w postaci referencji do typu Cd:\n";
    Bravo(c1);
    Bravo(c2);

    std::cout << "Test przypisania: ";
    Classic copy;
    copy = c2;
    std::cout << "C2 (Classic):\n";
    c2.report();
    std::cout << "Copy (Classic):\n";
    copy.report();

    return 0;
}


void Bravo(const Cd & disk)
{
    disk.report();
}