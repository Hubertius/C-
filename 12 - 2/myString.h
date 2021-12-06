#ifndef STRING_H_
#define STRING_H_

#include <iostream>

class String
{
    private:
        int len;
        char * str;
    public:
        String();
        String(const char * strLiteral);
        String(const String & stringObj);
        String & operator=(const char * strLiteral);
        String & operator=(const String & stringObj);
        String operator+(const String & stringObj);
        String & operator+=(const String & stringObj);
        int length() const { return this->len; }
        char & operator[](int i);
        const char & operator[](int i) const;

        bool operator<(const String & strObj) const;
        bool operator>(const String & strObj) const;
        bool operator==(const String & strObj) const;

        void stringLow();
        

        friend std::ostream & operator<<(std::ostream & os, const String & strObj);
        friend std::istream & operator>>(std::istream & is,  String & strObj);

        ~String();

};

#endif STRING_H_