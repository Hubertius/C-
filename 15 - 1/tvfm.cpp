#include "tvfm.h"

bool Tv::volUp()
{
    if(this->volume == MaxVal)
        return false;
    (this->volume)++;
    return true;
}

bool Tv::volDown()
{
    if(this->volume == MinVal)
        return false;
    (this->volume)--;
    return true;
}

void Tv::showSettings() const
{
    std::cout << "1) On / Off: Tv is ";
    if(this->state == 0)
        std::cout << "ON." << std::endl;
    else
        std::cout << "Off." << std::endl;
    std::cout << "2) Volume: " << this->volume << "." << std::endl;
    std::cout << "3) MaxChannel: " << this->maxChannel << std::endl;
    std::cout << "4) Actual channel: " << this->channel << "." << std::endl;
    std::cout << "5) Mode: ";
    if(this->mode == Antenna)
        std::cout << " Antenna." << std::endl;
    else
        std::cout << " Cabel." << std::endl;
    std::cout << "6) Input: ";
    if(this->input == TV)
        std::cout << " TV." << std::endl;
    else
        std::cout << " DVD." << std::endl;


}

void Remote::showModeNI() const
{
    std::cout << "Special mode of pilot (Normal / Interactive): ";
    if(this->modeNI == Normal)
        std::cout << "Normal." << std::endl;
    std::cout << "Interactive." << std::endl;
}

inline void Tv::setModeOfPilot(Remote & r)
{
    r.modeNI = (r.modeNI == Remote::Normal) ? Remote::Interactive : Remote::Normal;
}