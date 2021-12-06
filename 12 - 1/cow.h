#ifndef COW_H_
#define COW_H_

class Cow
{
    private:
        char name[20];
        char * hobby;
        double weight;
    public:
        Cow();
        Cow(const char * nm, const char * ho, double wt);
        Cow(const Cow & cow);
        ~Cow();
        Cow & operator=(const Cow & cow);
        void showCow() const;


};
#endif COW_H_