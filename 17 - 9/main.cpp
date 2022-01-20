#include <iostream>
#include <cmath>

int main()
{
    std::cout.setf(std::ios_base::left, std::ios_base::adjustfield);
    std::cout.setf(std::ios_base::showpos); 
    std::cout.setf(std::ios_base::showpoint);
    std::cout.precision(3);

    std::ios_base::fmtflags oldSetts = std::cout.setf(std::ios_base::scientific, std::ios_base::floatfield);
    std::cout << "Flush left:\n";
    for(int i = 1; i <= 41; i++)
    {
        std::cout.width(4);
        std::cout << i << "|";
        std::cout.width(12);
        std::cout << sqrt(static_cast<double>(i)) << "|\n";
    }

    std::cout.setf(std::ios_base::internal, std::ios_base::adjustfield);
    std::cout.setf(oldSetts, std::ios_base::floatfield);
    std::cout << "Flush internal:\n";
    for(int i = 1; i <= 41; i++)
    {
        std::cout.width(4);
        std::cout << i << "|";
        std::cout.width(12);
        std::cout << sqrt(static_cast<double>(i)) << "|\n";
    }

    std::cout.setf(std::ios_base::right, std::ios_base::adjustfield);
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout << "Flush internal:\n";
    for(int i = 1; i <= 41; i++)
    {
        std::cout.width(4);
        std::cout << i << "|";
        std::cout.width(12);
        std::cout << sqrt(static_cast<double>(i)) << "|\n";
    }


    return 0;
}