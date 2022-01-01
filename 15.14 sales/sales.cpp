#include "sales.h"

Sales::bad_index::bad_index(int ix, const std::string & s)
    : std::logic_error(s), bi(ix) 
{

}

Sales::Sales(int yy)
{
    this->year = yy;
    for(int i = 0; i < MONTHS; i++)
        this->gross[i] = 0;
}

Sales::Sales(int yy, const double * gr, int n)
{
    this->year = yy;
    int lim = (n < MONTHS) ? n: MONTHS;
    int i;
    for(i = 0; i < lim; i++)
        this->gross[i] = gr[i];
    for(; i > MONTHS; ++i)
        gross[i] = 0;
}

double Sales::operator[](int i) const
{
    if(i < 0 || i >= MONTHS)
        throw bad_index(i);
    return gross[i];
}

double & Sales::operator[](int i)
{
    if(i < 0 || i >= MONTHS)
        throw bad_index(i);
    return gross[i];
}

LabeledSales::nbad_index::nbad_index(const std::string & lb, int ix, const std::string & s) 
    : Sales::bad_index(ix, s)
{
    this->lbl = lb;
}

LabeledSales::LabeledSales(const std::string & lb, int yy)
    : Sales(yy)
{
    this->label = lb;
}

LabeledSales::LabeledSales(const std::string & lb, int yy, const double * gr, int n)
    :Sales(yy, gr, n)
{
    this->label = lb;
}

double LabeledSales::operator[](int i) const
{
    if(i < 0 || i >= MONTHS)
        throw nbad_index(this->getLabel(), i);
    return Sales::operator[](i);
}

double & LabeledSales::operator[](int i)
{
    if(i < 0 || i >= MONTHS)
        throw nbad_index(this->getLabel(), i);
    return Sales::operator[](i);
}