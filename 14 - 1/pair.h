#ifndef PAIR_H_
#define PAIR_H_

#include <iostream>
#include <string>

template <typename T1, typename T2>
class Pair
{
    private:
        T1 a;
        T2 b;
    public:
        T1 & getFirst()  { return this->a; }
        T2 & getSecond()  { return this->b; }
        Pair(const T1 & aval, const T2 & bval): a(aval), b(bval) {}
        Pair() {}
};


#endif PAIR_H_