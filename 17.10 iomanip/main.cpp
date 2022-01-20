#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    std::cout << std::fixed << std::right;

    std::cout << std::setw(6) << "N" << std::setw(20) << "Pierw. kwadratowy"
              << std::setw(27) << "Pierw. czwartego stopnia" << std::endl;

    double root;
    for(int n = 10; n <= 100; n += 10)
    {
        root = sqrt(n);
        std::cout << std::setw(6) << std::setfill('.') << n << std::setfill(' ')
                  << std::setw(14) << std::setprecision(3) << root
                  << std::setw(23) << std::setprecision(4) << sqrt(root) << std::endl;
    }
    return 0;
}