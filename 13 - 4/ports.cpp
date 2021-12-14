#include "ports.h"
#include <string.h>

Port::Port(const char * brand, const char * style, int b)
{
    this->brand = new char[strlen(brand)+1];
    strcpy(this->brand, brand);
    strcpy(this->style, style);
    if(b < 0)
        this->bottles = 0;
    this->bottles = b;
}

Port::Port(const Port & p)
{
    this->brand = new char[strlen(p.brand)+1];
    strcpy(this->brand, p.brand);
    strcpy(this->style, p.style);
    this->bottles = p.bottles;
}

Port::~Port()
{
    delete [] brand;
}

Port & Port::operator=(const Port & p)
{
    if(this == &p)
        return *this;
    delete [] this->brand;
    this->brand = new char[strlen(p.brand)+1];
    strcpy(this->brand, p.brand);
    strcpy(this->style, p.style);
    if(p.bottles < 0)
        this->bottles = 0;
    this->bottles = p.bottles;
    return *this;
}

Port & Port::operator+=(int b)
{
    if(b <= 0)
        return *this;
    this->bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if(b >= 0)
        return *this;
    this->bottles -= b;
    return *this;
}

int Port::bottleCount() const
{
    return this->bottles;
}
void Port::show() const
{
    std::cout << "Brand: " << this->brand << std::endl;
    std::cout << "Style: " << this->style << std::endl;
    std::cout << "Bottles: " << this->bottles << std::endl;
}



VintagePort::VintagePort()
    :Port()
{
    this->nickname = new char[1];
    this->nickname[0] = '\0';
}

VintagePort::VintagePort(const char * brand, const char * style, int b, const char * nickname, int year)
    :Port(brand, style, b)
{
    this->nickname = new char[strlen(nickname)+1];
    strcpy(this->nickname, nickname);
    this->year = year;
}

VintagePort::VintagePort(const VintagePort & vp)
    :Port(vp)
{
    this->nickname = new char[strlen(vp.nickname)+1];
    strcpy(this->nickname, vp.nickname);
    this->year = year;
}

VintagePort::~VintagePort()
{
    delete [] nickname;
}

void VintagePort::show() const
{
    Port::show();
    std::cout << "Nickname: " <<this->nickname << std::endl;
    std::cout << "Year: " << this->year << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Port & p)
{
    os << "Brand " << p.brand << " of style " << p.style << "." << std::endl;
    os << "We got " << p.bottles << " of it." << std::endl;
    return os;
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp)
{
    os << static_cast<const Port &>(vp);
    os << "Wine has nickname \"" << vp.nickname << std::endl;
    os << "Year of production: " << vp.year << std::endl;
    return os;
}