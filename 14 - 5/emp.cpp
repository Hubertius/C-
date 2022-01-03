#include "emp.h"
#include <string.h>
#include <limits>

AbstrEmp::AbstrEmp() : fname("Unknown"), lname("Unknown"), job("Unknown")
{

}



AbstrEmp::AbstrEmp(const std::string & fn, const std::string & ln, const std::string & j) : fname(fn), lname(ln), job(j)
{

}

AbstrEmp::AbstrEmp(const AbstrEmp & anotherAbstrEmp)
{
    this->fname = anotherAbstrEmp.fname;
    this->lname = anotherAbstrEmp.lname;
    this->job = anotherAbstrEmp.job;
}


void AbstrEmp::showAll() const
{
    std::cout << "Name: " << this->fname << std::endl;
    std::cout << "Last Name: " << this->lname << std::endl;
    std::cout << "Job: " << this->job << std::endl;
}

void AbstrEmp::setAll()
{
    std::cout << "Write name: ";
    std::getline(std::cin, this->fname);
    std::cout << "Write last name: ";
    std::getline(std::cin, this->lname);
    std::cout << "Write job: ";
    std::getline(std::cin, this->job);
}

std::ostream & operator<<(std::ostream & os, const AbstrEmp & abstrEmpObj)
{
    os << "Name: " << abstrEmpObj.fname << std::endl;
    os << "Last Name: " << abstrEmpObj.lname << std::endl;
    os << "Job: " << abstrEmpObj.job << std::endl;
    return os;
}

AbstrEmp::~AbstrEmp() {}


Employee::Employee() : AbstrEmp()
{

}

Employee::Employee(const std::string & fn, const std::string & ln, const std::string & j)
    : AbstrEmp(fn, ln, j)
{

}

void Employee::showAll() const 
{
    std::cout << "Employee data:" << std::endl;
    AbstrEmp::showAll();
    std::cout << std::endl;
}

void Employee::setAll() 
{
    std::cout << "Set data for Employee: " << std::endl;
    AbstrEmp::setAll();
}

Manager::Manager() : AbstrEmp(), inChargeOf(0)
{

}

Manager::Manager(const std::string & fn, const std::string & ln, const std::string & j)
    :AbstrEmp(fn, ln, j), inChargeOf(0)
{

}

Manager::Manager(const AbstrEmp & anotherEmpObj, int ico)
    :AbstrEmp(anotherEmpObj)
{
    if(ico < 0)
        this->inChargeOf = 0;
    else
        this->inChargeOf = ico;
}

Manager::Manager(const Manager & anotherManager)
    :AbstrEmp(anotherManager), inChargeOf(anotherManager.inChargeOf)
{

}

void Manager::showAll() const
{
    std::cout << "Manager data: ";
    AbstrEmp::showAll();
    std::cout << "Manger in charge of: " << this->inChargeOf << std::endl;
}

void Manager::setAll() 
{
    AbstrEmp::setAll();
    std::cout << "How many employees manager is comanding? ";
    int input;
    if(!(std::cin >> input))
    {
        std::cin.clear();
        this->inChargeOf = 0;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        return;
    }
    if(input < 0)
        this->inChargeOf = 0;
    else
        this->inChargeOf = input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

}

Fink::Fink() : AbstrEmp(), reportsTo("Unknown")
{

}

Fink::Fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
    : AbstrEmp(fn, ln, j), reportsTo(rpo)
{
}

Fink::Fink(const AbstrEmp & e, const std::string & rpo)
    : AbstrEmp(e), reportsTo(rpo)
{
    
}

Fink::Fink(const Fink & anotherFinkObj)
    : AbstrEmp(anotherFinkObj), reportsTo(anotherFinkObj.reportsTo)
{

}

void Fink::showAll() const
{
    std::cout << "Fink data: " << std::endl;
    AbstrEmp::showAll();
    std::cout << "\"Snitch\" reports to: " << this->reportsTo << std::endl;
    std::cout << std::endl;

}

void Fink::setAll() 
{
    AbstrEmp::setAll();
    std::cout << "For who is he reporting? ";
    std::getline(std::cin, this->reportsTo);
}

HighFink::HighFink()
    : AbstrEmp(), Manager(), Fink()
{

}

HighFink::HighFink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
    :AbstrEmp(fn, ln, j), Manager(fn, ln, j), Fink(fn, ln, j, rpo)
{

}

HighFink::HighFink(const AbstrEmp & e, const std::string & rpo, int ico)
    : AbstrEmp(e), Manager(e, ico), Fink(e, rpo)
{

}

HighFink::HighFink(const Manager & m, const std::string & rpo)
    : AbstrEmp(m), Manager(m), Fink(m, rpo)
{

}

HighFink::HighFink(const Fink & f, int ico)
    : AbstrEmp(f), Manager(f, ico), Fink(f)
{

}


HighFink::HighFink(const HighFink & anotherHighFinkObj)
    : AbstrEmp(anotherHighFinkObj), Manager(anotherHighFinkObj), Fink(anotherHighFinkObj)
{
 
}

void HighFink::showAll() const 
{
    std::cout << "High fink data:" << std::endl;
    AbstrEmp::showAll();
    std::cout << "Manger in charge of: " << this->getInChargeOf() << std::endl;
    std::cout << "For who \"snitch\" is reporting? " << this->getReportsTo() << std::endl;
    std::cout << std::endl;
}

void HighFink::setAll() 
{
    AbstrEmp::setAll();
    std::cout << "How many employees manager is comanding? ";
    int input;
    if(!(std::cin >> input))
    {
        std::cin.clear();
        this->getInChargeOf() = 0;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        return;
    }
    if(input < 0)
        this->getInChargeOf() = 0;
    else
        this->getInChargeOf() = input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "For who is he reporting? ";
    std::getline(std::cin, this->getReportsTo());


}