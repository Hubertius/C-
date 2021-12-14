#include "ports.h"

int main()
{
    
    Port firstPort;
    Port secondPort = Port("Chetozes", "Sparkling", 2);
    std::cout <<"FirstPort:" << std::endl;
    std::cout << firstPort;
    firstPort = secondPort;
    std::cout <<"SecondPort:" << std::endl;
    std::cout << secondPort;
    std::cout <<"FirstPort:" << std::endl;
    std::cout << firstPort;
    VintagePort firstVp;
    VintagePort secondVp = firstVp;
    Port * pointerToPorts = &secondPort;
    std::cout << "Dynamic binding to Port object:\n";
    pointerToPorts->show();
    pointerToPorts = &secondVp;
    std::cout << "Dynamic binding to VintagePort object:\n";
    pointerToPorts->show();

    return 0;
}