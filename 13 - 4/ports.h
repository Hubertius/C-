#ifndef PORTS_H_
#define PORTS_H_

#include <iostream>

class Port;
std::ostream & operator<<(std::ostream & os, const Port & p);

class VintagePort;
std::ostream & operator<<(std::ostream & os, const VintagePort & vp);

class Port
{
    private:
        char * brand;
        char style[20];
        int bottles;
    public:
        Port(const char * brand = "abscence", const char * style = "abscence", int b = 0);
        Port(const Port & p);
        virtual ~Port();
        Port & operator=(const Port & p);
        Port & operator+=(int b);
        Port & operator-=(int b);
        int bottleCount() const;
        virtual void show() const;
        friend std::ostream & operator<<(std::ostream & os, const Port & p);
};

class VintagePort: public Port
{

    private:
        char * nickname;
        int year;
    public:
        VintagePort();
        VintagePort(const char * brand, const char * style, int b, const char * nickName, int year);
        VintagePort(const VintagePort & vp);
        ~VintagePort();
        void show() const;
        friend std::ostream & operator<<(std::ostream & os, const VintagePort & vp);
};


#endif PORTS_H_