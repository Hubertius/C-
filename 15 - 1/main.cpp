#include "tvfm.h"


int main()
{
    Tv tv;
    tv.channUp();
    tv.showSettings();
    std::cout << std::endl;

    Remote remote;

    std::cout << "Turning tv On / Off";
    remote.onOff(tv);
    tv.showSettings();
    std::cout << std::endl;

    std::cout << "Changing input of the tv." << std::endl;
    remote.setInput(tv);
    tv.showSettings();
    std::cout << std::endl;

    std::cout << "Changing mode of pilot." << std::endl;
    tv.setModeOfPilot(remote);
    remote.showModeNI();
    std::cout << std::endl;
    return 0;
}