#include <iostream>
#include "cow.h"

int main()
{
    Cow firstCow = Cow("Bella", "Running away", 100.1);
    Cow secondCow = firstCow;
    Cow thirdCow;

    firstCow.showCow();
    secondCow.showCow();
    thirdCow.showCow();
    std::cout << std::endl;
}