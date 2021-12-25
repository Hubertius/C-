#ifndef WINE_H_
#define WINE_H_

#include "pair.h"
#include "valarray"

typedef std::valarray<int> arrayInt;
typedef Pair<arrayInt, arrayInt> PairArray;

class Wine
{
    private:
        std::string name;
        PairArray yearNumData;
    public:
        Wine();
        Wine(const char * l, int y, const int yr[], const int bot[]);
        Wine(const char * l, int y);
        const arrayInt & getYears()  { return yearNumData.getFirst(); }
        const arrayInt & getBottForYear()  { return yearNumData.getSecond(); }
        const arrayInt  getBottles(Wine & anotherWine, int y);
        const std::string & getLabel() const { return this->name; }
        const int sum()  { return this->yearNumData.getSecond().sum(); }
};

#endif WINE_H_