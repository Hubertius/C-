#include "dma.h"
#include <string.h>

DMA::DMA(const char * l)
{
    this->label = new char[strlen(l)+1];
    strcpy(this->label, l);
}

DMA::DMA(const DMA & anotherDMA)
{
    this->label = new char[strlen(anotherDMA.label)+1];
    strcpy(this->label, anotherDMA.label);
}


DMA & DMA::operator=(const DMA & anotherDMA)
{
    if(this == &anotherDMA)
        return * this;
    delete [] this->label;
    this->label = new char[strlen(anotherDMA.label)+1];
    strcpy(this->label, anotherDMA.label);
    return *this;
}

char * DMA::getLabel() const
{
    return this->label;
}

DMA::~DMA()
{ 
    delete [] label;
}

BaseDMA::BaseDMA(const char * l,  int r)
    : DMA(l)
{
    this->rating = r;
}

BaseDMA::BaseDMA( const BaseDMA & anotherBaseDMA)
    : DMA(anotherBaseDMA)
{
    this->rating = anotherBaseDMA.rating;
}

BaseDMA::~BaseDMA()
{

} 

BaseDMA & BaseDMA::operator=(const BaseDMA & anotherBaseDMA)
{
    if(this == &anotherBaseDMA)
        return *this;
    DMA::operator=(anotherBaseDMA);
    this->rating = anotherBaseDMA.rating;
    return *this;
}

void BaseDMA::readInfo() const
{
   std::cout << "BaseDMA object:\n";
   std::cout << "Label: " << this->getLabel() << std::endl;
   std::cout << "Rating: " << this->rating << std::endl;
}


LacksDMA::LacksDMA(const char * c, const char * l, int r)
    :BaseDMA(l,r)
{
    strcpy(this->color, c);
}

LacksDMA::LacksDMA(const LacksDMA & anotherLacksDMA)
    : BaseDMA(anotherLacksDMA)
{
    strcpy(this->color, anotherLacksDMA.color);
}

LacksDMA & LacksDMA::operator=(const LacksDMA & anotherLacksDMA)
{
    if(this == &anotherLacksDMA)
        return *this;
    DMA::operator=(anotherLacksDMA);
    strcpy(this->color, anotherLacksDMA.color);
    return * this;
}

void LacksDMA::readInfo() const
{
    BaseDMA::readInfo();
    std::cout << "LacksDMA object:\n";
    std::cout << "Color: " << color << std::endl;
}

HasDMA::HasDMA(const char * s, const char * l, int r)
    :BaseDMA(l, r)
{
    this->style = new char[strlen(s)+1];
    strcpy(this->style, s);
}

HasDMA::HasDMA(const HasDMA & anotherHasDMA)
    :BaseDMA(anotherHasDMA)
{
    this->style = new char[strlen(anotherHasDMA.style)+1];
    strcpy(this->style, anotherHasDMA.style);
}

HasDMA::~HasDMA()
{
    delete [] this->style;
}

HasDMA & HasDMA::operator=(const HasDMA & anotherHasDMA)
{
    if(this == &anotherHasDMA)
        return *this;
    BaseDMA::operator=(anotherHasDMA);
    delete [] this->style;
    this->style = new char[strlen(anotherHasDMA.style)+1];
    strcpy(this->style, anotherHasDMA.style);
    return *this;
}
void HasDMA::readInfo() const
{
    BaseDMA::readInfo();
    std::cout << "HasDMA object:\n";
    std::cout << "Style: " << this->style << std::endl;

}

