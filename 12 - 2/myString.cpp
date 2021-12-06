#include <string.h>
#include "myString.h"

String::String()
{
    this->len = 0;
    this->str = nullptr;
}

String::String(const char * strLiteral)
{
    this->len = strlen(strLiteral);
    this->str = new char[(this->len)+1];
    strcpy(this->str, strLiteral);

}

String::String(const String & stringObj)
{
    this->len = strlen(stringObj.str);
    this->str = new char[this->len+1];
    strcpy(this->str, stringObj.str);
}

String & String::operator=(const char * strLiteral)
{
    this->len = strlen(strLiteral);
    delete [] this->str;
    this->str = new char[this->len+1];
    strcpy(this->str, strLiteral);
    return *this;
}

String & String::operator=(const String & stringObj)
{
    this->len = strlen(stringObj.str);
    delete [] this->str;
    this->str = new char[this->len+1];
    strcpy(this->str, stringObj.str);
    return *this;
}

String String::operator+(const String & stringObj)
{
    int tmpLen = strlen(this->str) + strlen(stringObj.str);
    String temp;
    temp.len = tmpLen;
    temp.str = new char[temp.len+1];
    strcpy(temp.str, this->str);
    strcat(temp.str, stringObj.str);
    return temp;
}

String & String::operator+=(const String & stringObj)
{
    char tmpStr[this->len+1];
    strcpy(tmpStr, this->str);
    delete [] this->str;
    this->len += strlen(stringObj.str);
    this->str = new char[this->len+1];
    strcpy(this->str, tmpStr);
    strcat(this->str, stringObj.str);
    return *this;
}


char & String::operator[](int i)
{

    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}


bool String::operator<(const String & strObj) const
{
    return strcmp(this->str, strObj.str) < 0;
}

bool String::operator>(const String & strObj) const
{
    return strObj < *this;
}

bool String::operator==(const String & strObj) const
{
    return strcmp(this->str, strObj.str) == 0;
}


void String::stringLow()
{
    int i = 0;
    while(*(this->str+i) != '\0')
    {
        this->str[i] = static_cast<char>(tolower(str[i]));
        i++;
    }
}




std::ostream & operator<<(std::ostream & os, const String & strObj)
{
    if(strObj.str == nullptr)
    {
        std::cout << "Nothing to show. :(";
        return os;
    }
    return os << strObj.str;
}

std::istream & operator>>(std::istream & is,  String & strObj)
{
    delete [] strObj.str;
    strObj.str = new char[101];
    std::cin.get(strObj.str, 101);
    std::cin.ignore();
    strObj.len = strlen(strObj.str);
    return is;
}

String::~String()
{
    delete [] this->str;
}
