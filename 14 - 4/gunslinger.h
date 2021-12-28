#ifndef GUNSLINGER_H_
#define GUNSLINGER_H_

#include "person.h"

class Gunslinger: public virtual Person
{
    private:
        int gushesOnRevolver;
    protected:
        double timeOfDrawing;
    public:
        Gunslinger(int m_gushesOnRevolver = 0, double m_timeOfDrawing = 0.0, std::string name = "Unknown", std::string surname = "Unknown");
        int getGushesOnRevolver() { return this->gushesOnRevolver;}
        virtual void show() const override;
        virtual void set() override;
};

#endif 