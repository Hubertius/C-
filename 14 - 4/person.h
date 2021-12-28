#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include <iostream>

class Person
{
    private:
        std::string name;
        std::string surname;
    public:
        Person(std::string m_name = "Unknown", std::string m_surname = "Unknown") : name(m_name), surname(m_surname) {}
        virtual void show() const = 0;
        virtual void set();
        virtual ~Person() = 0;

};

#endif