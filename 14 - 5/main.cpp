#include <iostream>
#include "emp.h"

int main()
{
    Employee emp("Tadeusz", "Hubert", "Seller");
    std::cout << emp << std::endl;
    emp.showAll();
    
    Manager ma("Amforiusz", "Smoczewski", "Plumber");
    std::cout << ma << std::endl;
    ma.showAll();

    Fink fi("Maurycy", "Olkuski", "Driver", "Taxi Mokapsi");
    std::cout << fi << std::endl;
    fi.showAll();

    HighFink hf(ma, "Jan Kudłaty");
    hf.showAll();

    std::cout << "Press random button to continue: ";
    std::cin.get();
    
    HighFink hf2;
    hf2.setAll();

    std::cout << "Showing data of all employees:\n" << std::endl;
    AbstrEmp * polyEmps[4] = {&emp, &ma, &hf, &hf2};
    for(int i = 0; i < 4; i++)
        polyEmps[i]->showAll();
    return 0;
}