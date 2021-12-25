#include "wine.h"

Wine::Wine() : name("Unnamed")
{
    arrayInt varIntYear(1);
    arrayInt varIntBottNum(1);
    varIntYear[0] = 1998;
    varIntBottNum[0] = 17;
    this->yearNumData = Pair<arrayInt, arrayInt>(varIntYear, varIntBottNum);
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : name(l)
{
    arrayInt varIntYear(y);
    arrayInt varIntBottNum(y);
    for(int i = 0; i < y; i++)
    {
        varIntYear[i] = yr[i];
        varIntBottNum[i] = bot[i];
    }
    this->yearNumData = Pair<arrayInt,arrayInt>(varIntYear, varIntBottNum);
}

Wine::Wine(const char * l, int y) : name(l)
{
    arrayInt varIntYear(y);
    arrayInt varIntBottNum(y);
    this->yearNumData = Pair<arrayInt, arrayInt>(varIntYear, varIntBottNum);
}

const arrayInt  Wine::getBottles( Wine & anotherWine, int y) 
{
    arrayInt arrayToReturn;
    const int numOfBottlesForYears = anotherWine.yearNumData.getSecond().size();
    if(numOfBottlesForYears >= y)
        arrayToReturn.resize(y);
    else
        arrayToReturn.resize(numOfBottlesForYears);
    arrayToReturn = anotherWine.yearNumData.getSecond();
    return arrayToReturn;
}
